/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/14 17:35:01 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/14 17:37:24 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"
#include "libft/libft.h"

int		is_percentage(const char *format)
{
	int i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			return (i);
		i++;
	}
	return (i);
}

int		is_flag(const char *format, int *pos, t_struct *box)
{
	if (format[*pos] == '-')
	 	return(flag_desh(format, pos, box));
	// else if (format[pos] == '0')
	// 	return();
	else if (format[*pos] >= '1' && format[*pos] <= '9')
		return(flag_num(format, pos, box));
	else if (format[*pos] == '.')
	  	return(flag_point(format, pos, box));
	// else if (format[pos] == '*')
	// 	return();
	return (-1);
}

void	ft_printf_parse(const char *format, t_struct *box, va_list *ap)
{
	char	tab_index[4];
	int		pos;
	int		index;
	int 	i;
	int		tmp;

	put_index(tab_index);
	pos = is_percentage(format);
	ft_write(format, pos, box);
	i = 0;
	tmp = 0;
	while (format[pos])
	{
		pos++;
		while (tmp != -1)
			tmp = is_flag(format, &pos, box);
		if ((index = find_index(tab_index, format[pos])) != -1)
		{
			apply_conversions(index, ap, box);
			pos++;
		}
		tmp = 0;
		i = is_percentage(format + pos);
		ft_write(format + pos, i, box);
		init_box(box);
		pos = pos + i;
	}
}

int		ft_printf(const char *format, ...)
{
	va_list 	ap;
	t_struct	box;

	va_start(ap, format);
	init_box(&box);
	box.value = 0;
	ft_printf_parse(format, &box, &ap);
	va_end(ap);
	return (box.value);   //need to add the size of results
}