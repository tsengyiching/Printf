/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_x_cap.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/05 18:11:13 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/05 18:11:15 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"

void	convert_hexa_cap(va_list *ap, t_struct *box)
{
	unsigned int	nb;
	int 			len;
	int				index_zero;
	char			*str_nb;

	index_zero = 0;
	nb = va_arg(*ap, int);
	str_nb = ft_utoa_base(nb, "0123456789ABCDEF");
	len = ft_strlen(str_nb);
	if (box->zero != -1 && box->precision != -1)
	{
		box->width = box->zero;
		box->zero = -1;
	}
	if (box->precision == 0 && nb == 0)
	{
		if (box->width != -1)
			write_spaces(box->width, box);
		init_box(box);
		len = 0;
	}
	if (box->width != -1)
	{
		if (box->precision != -1)
		{
			if (box->width > box->precision)
			{
				if (box->precision > len)
				{
					index_zero = box->precision - len;
					write_spaces((box->width) - (box->precision), box);
				}
				else
					write_spaces((box->width) - len, box);
			}
			else if (box->width < box->precision && (box->precision) > len)
				index_zero = box->precision - len;
		}
		else
			write_spaces((box->width - len), box);
		write_nbr(str_nb, len, index_zero, box);
	}
	else if (box->align_left != -1)
	{
		if (box->precision != -1)
		{
			index_zero = box->precision - len;
			write_nbr(str_nb, len, index_zero, box);
			if (box->align_left > box->precision)
				write_spaces((box->align_left) - (box->precision), box);
		}
		else
		{
			write_nbr(str_nb, len, index_zero, box);
			if (box->align_left > len)
				write_spaces(box->align_left - len, box);
			else if (box->align_left > box->precision)
				write_spaces(box->align_left - box->precision, box);
		}
	}
	else if (box->zero != -1 || box->precision != -1)
	{
		if (box->zero > len)
			index_zero = box->zero - len;
		else if (box->precision > len)
			index_zero = box->precision - len;
		write_nbr(str_nb, len, index_zero, box);
	}
	else
		write_nbr(str_nb, len, index_zero, box);
	free(str_nb);
}
