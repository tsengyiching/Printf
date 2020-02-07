/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_x.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/05 14:51:55 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/05 14:51:57 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"

void	convert_hexa(va_list *ap, t_struct *box)
{
	unsigned int	nb;
	int				len;
	char			*str_nb;

	nb = va_arg(*ap, int);
	str_nb = ft_utoa_base(nb, "0123456789abcdef");
	len = ft_strlen(str_nb);
	if (box->zero != -1 && box->precision != -1)
	{
		box->width = box->zero;
		box->zero = -1;
	}
	if (box->precision == 0 && nb == 0)
		add_spaces_n_init(&len, box);
	if (box->width != -1 && box->precision != -1)
		do_align_right(str_nb, len, box);
	else if (box->align_left != -1 && box->precision != -1)
		do_align_left(str_nb, len, box);
	else
		add_spaces_or_zeros(str_nb, len, box);
	free(str_nb);
}

void	convert_hexa_cap(va_list *ap, t_struct *box)
{
	unsigned int	nb;
	int				len;
	char			*str_nb;

	nb = va_arg(*ap, int);
	str_nb = ft_utoa_base(nb, "0123456789ABCDEF");
	len = ft_strlen(str_nb);
	if (box->zero != -1 && box->precision != -1)
	{
		box->width = box->zero;
		box->zero = -1;
	}
	if (box->precision == 0 && nb == 0)
		add_spaces_n_init(&len, box);
	if (box->width != -1 && box->precision != -1)
		do_align_right(str_nb, len, box);
	else if (box->align_left != -1 && box->precision != -1)
		do_align_left(str_nb, len, box);
	else
		add_spaces_or_zeros(str_nb, len, box);
	free(str_nb);
}

void	convert_unsigned_int(va_list *ap, t_struct *box)
{
	unsigned int	nb;
	int				len;
	char			*str_nb;

	nb = va_arg(*ap, int);
	str_nb = ft_utoa_base(nb, "0123456789");
	len = ft_strlen(str_nb);
	if (box->zero != -1 && box->precision != -1)
	{
		box->width = box->zero;
		box->zero = -1;
	}
	if (box->precision == 0 && nb == 0)
		add_spaces_n_init(&len, box);
	if (box->width != -1 && box->precision != -1)
		do_align_right(str_nb, len, box);
	else if (box->align_left != -1 && box->precision != -1)
		do_align_left(str_nb, len, box);
	else
		add_spaces_or_zeros(str_nb, len, box);
	free(str_nb);
}
