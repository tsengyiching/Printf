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

#include "ft_libft_printf.h"

void	convert_nbr(va_list *ap, t_struct *box)
{
	int 	nb;
	int 	len;
	char	*tmp;

	nb = va_arg(*ap, int);
	tmp = ft_itoa(nb);
	len = ft_strlen(tmp);
	if (box->width != -1)
	{
		if (box->precision == -1)
		{
			if (box->width > len)
				write_spaces((box->width - len), box);
			write_words((const char *)tmp, len, box);
		}
		else
		{
			if ((box->precision) > len)
				write_zeros(box->precision - len, box);
			write_words((const char *)tmp, len, box);
		}
	}
	else
		write_words((const char *)tmp, len, box);
	free(tmp);
}
