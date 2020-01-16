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

#include "printf_libft.h"
#include "libft/libft.h"

void	put_index(char *tab_index)
{
	tab_index[0] = 'c';
	tab_index[1] = 's';
	tab_index[2] = 'd';
	tab_index[3] = 0;
}

// void	put_width(char c)
// {
// 	t_struct save;
// 	int i;
// 	int width;

// 	i = 0;
// 	width = 0;
// 	while (format[pos] >= '0' && format[pos] <= '9')
// 		save.str[i++] = format[pos++];
// 	save.str[i] = 0;
// 	width = ft_atoi(save.str) - 1;
// 	while (width > 0)
// 	{
// 		write(1, " ", 1);
// 		width--;
// 	}
// }                                                       

// void	ft_analyze(char *str)
// {

// }	

void	apply_conversions(int temp, va_list *ap)
{
	void 	(*ptr_function[3]) (va_list *);

	ptr_function[0] = &printf_char;
	ptr_function[1] = &printf_str;
	ptr_function[2] = &printf_nbr;

	(*ptr_function[temp]) (ap);
}

int		find_index(char *tab, char element)
{
	int index;

	index = 0;
	while (tab[index])
	{
		if (tab[index] == element)
			return (index);
		index++;
	}
	return (-1);
}

int		ft_printf(const char *format, ...)
{
	char	tab_index[4];
	va_list ap;
	int 	pos;
	int		temp;

	pos = 0;
	temp = 0;
	put_index(tab_index);
	va_start(ap, format);
	while (format[pos])
	{
		if (pos != 0 && format[pos - 1] == '%')
		{
			temp = find_index(tab_index, format[pos]);
			if (temp != -1)
				apply_conversions(temp, &ap);
		}
		else if (format[pos] != '%')
			write(1, &format[pos], 1);
		pos++;
	}
	va_end(ap);
	return (0);
}