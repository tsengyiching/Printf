/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_p.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/06 18:13:35 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/06 18:13:39 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"

void	convert_address(va_list *ap, t_struct *box)
{
	unsigned long int	nb_decimal;
	void				*pointer;
	char				*str_nb;
	int					len;

	pointer = va_arg(*ap, void *);
	nb_decimal = (uintmax_t)pointer;
	str_nb = ft_utoa_base(nb_decimal, "0123456789abcdef");
	len = ft_strlen(str_nb);
	(box->value) += 2;
	if (box->width != -1)
		write_spaces(box->width - len - 2, box);
	write(1, "0x", 2);
	write_words(str_nb, len, box);
	if (box->align_left != -1)
		write_spaces(box->align_left - len - 2, box);
	free(str_nb);
}
