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
	int		neg;
	char	*str_nb;

	neg = 0;
	nb = va_arg(*ap, int);
	if (nb < 0)
	{
		nb = -nb;
		neg = 1;
		(box->value)++;
		if (box->width != -1)
			(box->width)--;
	}
	str_nb = put_int_to_str(nb);
	len = ft_strlen(str_nb);
	if (box->width != -1)
	{
		if (box->precision == -1)
		{
			if (box->width > len)
				write_spaces((box->width - len), box);
			if (neg == 1)
				write(1, "-", 1);
		}
		else // p != -1
		{
			if (box->width > box->precision)
			{
				if ((box->precision) > len)
				{
					write_spaces((box->width) - (box->precision), box);
					if (neg == 1)
						write(1, "-", 1);
					write_zeros((box->precision - len), box);
				}
				else // w > p, p <= len
				{
					write_spaces(box->width - len, box);
					if (neg == 1)
						write(1, "-", 1);
				}
			}
			else // w < p
			{
				if (box->precision > len)
				{
					if (neg == 1)
						write(1, "-", 1);
					write_zeros((box->precision - len), box);
				}
				else // w < p, p <= len
				{
					if (neg == 1)
						write(1, "-", 1);
				}
			}
		}
	}
	if (box->width == -1)
	{
		if (neg == 1)
			write(1, "-", 1);
	}
	write_words((const char *)str_nb, len, box);
	free(str_nb);
}
