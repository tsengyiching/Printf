/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/14 17:35:01 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/31 22:27:27 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

int		is_flag(const char *format, int *pos, va_list *ap, t_struct *box)
{
	if (format[*pos] == '-')
		return (put_align_left(format, pos, box));
	else if (format[*pos] == '0')
		return (put_zero(format, pos, box));
	else if (format[*pos] >= '1' && format[*pos] <= '9')
		return (put_width(format, pos, box));
	else if (format[*pos] == '.')
		return (put_precision(format, pos, box));
	else if (format[*pos] == '*')
		return (put_option(pos, ap, box));
	return (-1);
}

void	ft_printf_parse(const char *format, t_struct *box, va_list *ap)
{
	char	tab_index[10];
	int		pos;
	int		index;
	int		i;
	int		tmp;

	init_tab_index(tab_index);
	pos = get_percentage_index(format);
	write_words(format, pos, box);
	i = 0;
	tmp = 0;
	while (format[pos])
	{
		pos++;
		while (tmp != -1)
			tmp = is_flag(format, &pos, ap, box);
		if ((index = find_index(tab_index, format[pos])) != -1)
		{
			if (index == 8)
				convert_percentage(box);
			else
				apply_conversion(index, ap, box);
			pos++;
		}
		tmp = 0;
		i = get_percentage_index(format + pos);
		write_words(format + pos, i, box);
		init_box(box);
		pos = pos + i;
	}
}

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_struct	box;

	va_start(ap, format);
	init_box(&box);
	box.value = 0;
	ft_printf_parse(format, &box, &ap);
	va_end(ap);
	return (box.value);
}
