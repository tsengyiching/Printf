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

void	print_nbr(char *str_nb, int len, int index_zero, t_struct *box)
{
	if (box->neg == 1)
		write(1, "-", 1);
	if (index_zero != 0)
		write_zeros(index_zero, box);
	write_words((const char *)str_nb, len, box);
}

void	convert_decimal(va_list *ap, t_struct *box)
{
	long 	nb;
	int 	len;
	int		index_zero;
	char	*str_nb;

	index_zero = 0;
	nb = va_arg(*ap, int);
	if (nb < 0)
		nb_is_neg(&nb, box);
	str_nb = put_int_to_str(nb);
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
		print_nbr(str_nb, len, index_zero, box);
	}
	else if (box->align_left != -1)
	{
		if (box->precision != -1)
		{
			index_zero = box->precision - len;
			print_nbr(str_nb, len, index_zero, box);
			if (box->align_left > box->precision)
				write_spaces((box->align_left) - (box->precision), box);
		}
		else
		{
			print_nbr(str_nb, len, index_zero, box);
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
		print_nbr(str_nb, len, index_zero, box);
	}
	else
		print_nbr(str_nb, len, index_zero, box);
	free(str_nb);
}
