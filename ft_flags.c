/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_save_flags.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 17:44:50 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/31 22:23:13 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"

int		flag_num(const char *format, int *pos, t_struct *box)
{
	box->width = get_int(format, pos);
	return (1);
}

int		flag_dash(const char *format, int *pos, t_struct *box)
{
	box->align_left = get_int(format, pos);
	return (1);
}

int		flag_point(const char *format, int *pos, t_struct *box)
{
	box->precision = get_int(format, pos);
	return (1);
}

int		flag_star(int *pos, va_list *ap, t_struct *box)
{
	int		i;

	i = 0;
	if (box->width == -1 && box->option == -1 && box->precision != 0)
	{
		i = va_arg(*ap, int);
		if (i >= 0)
			box->width = i;
		else
			box->align_left = -(i);
		box->option = 1;
	}
	else if (box->option == 1 || box->precision == 0)
	{
		i = va_arg(*ap, int);
		box->precision = i;
	}
	(*pos)++;
	return (1);
}

int		flag_zero(const char *format, int *pos, t_struct *box)
{
	box->zero = get_int(format, pos);
	return (1);
}
