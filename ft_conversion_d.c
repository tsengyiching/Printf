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

void	nb_is_neg(int *nb, int *neg, t_struct *box)
{
	*nb = *nb * -1;
	*neg = 1;
	(box->value)++;
	if (box->width != -1)
		(box->width)--;
	else if (box->align_left != -1)
		(box->align_left)--;
	else if (box->zero != -1)
		(box->zero)--;
}

void	convert_nbr_width(char *str_nb, int len, int neg, t_struct *box)
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
			if (neg == 1)
				write(1, "-", 1);
			if (box->precision > len)
				write_zeros((box->precision - len), box);
		}
	}
	write_words((const char *)str_nb, len, box);
}

void	convert_nbr(va_list *ap, t_struct *box)
{
	int 	nb;
	int 	len;
	int		neg;
	char	*str_nb;

	neg = 0;
	nb = va_arg(*ap, int);
	if (nb < 0)
		nb_is_neg(&nb, &neg, box);
	str_nb = put_int_to_str(nb);
	len = ft_strlen(str_nb);
	if (box->zero != -1 && box->precision != -1)
	{
		box->width = box->zero;
		box->zero = -1;
	}
	if (box->width != -1)
		convert_nbr_width(str_nb, len, neg, box);
	else if (box->align_left != -1)
	{
		if (neg == 1)
			write(1, "-", 1);
		if (box->precision != -1)
		{
			write_zeros(box->precision - len, box);
			write_words((const char *)str_nb, len, box);
			if (box->align_left > box->precision)
				write_spaces((box->align_left) - (box->precision), box);
		}
		else
		{
			write_words((const char *)str_nb, len, box);
			if (box->align_left > len)
				write_spaces(box->align_left - len, box);
			else if (box->align_left > box->precision)
				write_spaces(box->align_left - box->precision, box);
		}
	}
	else if (box->zero != -1 && box->zero > len)
	{
		if (neg == 1)
			write(1, "-", 1);
		write_zeros(box->zero - len, box);
		write_words((const char *)str_nb, len, box);
	}
	else if (box->precision != -1 && box->precision > len)
	{
		if (neg == 1)
			write(1, "-", 1);
		write_zeros(box->precision - len, box);
		write_words((const char *)str_nb, len, box);
	}
	else
	{
		if (box->width == -1)
		{
			if (neg == 1)
				write(1, "-", 1);
		}
		write_words((const char *)str_nb, len, box);
	}
	free(str_nb);
}
