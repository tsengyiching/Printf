/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversion_d.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 16:30:37 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 16:30:40 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"

void	nb_is_neg(long *nb, t_struct *box)
{
	*nb = *nb * -1;
	box->neg = 1;
	(box->value)++;
	if (box->width != -1)
		(box->width)--;
	else if (box->align_left != -1)
		(box->align_left)--;
	else if (box->zero != -1)
		(box->zero)--;
}

void	convert_decimal(va_list *ap, t_struct *box)
{
	long	nb;
	int		len;
	char	*str_nb;

	nb = va_arg(*ap, int);
	if (nb < 0)
		nb_is_neg(&nb, box);
	str_nb = ft_utoa_base((unsigned long)nb, "0123456789");
	len = ft_strlen(str_nb);
	if (box->zero != -1 && box->precision != -1)
	{
		box->width = box->zero;
		box->zero = -1;
	}
	if (box->precision == 0 && nb == 0)
		add_spaces_n_init(&len, box);
	if (box->width != -1 && box->precision != -1)
		do_nbr_align_right(str_nb, len, box);
	else if (box->align_left != -1 && box->precision != -1)
		do_nbr_align_left(str_nb, len, box);
	else
		add_spaces_or_zeros(str_nb, len, box);
	free(str_nb);
}
