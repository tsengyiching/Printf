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

int		find_index(char *tab_index, char element)
{
	int i;

	i = 0;
	while (tab_index[i])
	{
		if (tab_index[i] == element)
			return (i);
		i++;
	}
	return (-1);
}

void	apply_conversions(int index, va_list *ap)
{
	void 	(*ptr_function[3]) (va_list *);

	ptr_function[0] = &printf_char;
	ptr_function[1] = &printf_str;
	ptr_function[2] = &printf_nbr;

	(*ptr_function[index]) (ap);
}

void	analyse(const char *format, int *pos, va_list *ap, char *tab_index)
{
	t_struct 	save;
	int 		width;
	int 		index;
	char		*temp;
	char		*temp2;

	if ((index = find_index(tab_index, format[*pos])) == -1)
	{
		save.str = ft_strdup("");
		while (format[*pos] >= '0' && format[*pos] <= '9')
		{
			temp = ft_substr(format, *pos, 1);
			temp2 = ft_strjoin(save.str, temp);
			free(temp);
			free(save.str);
			save.str = temp2;
			(*pos)++;
		}
		width = ft_atoi(save.str) - 1;
		while (width > 0)
		{
			write(1, " ", 1);
			width--;
		}
		//free(save.str);
	}
	if ((index = find_index(tab_index, format[*pos])) != -1)
		apply_conversions(index, ap);
	//free(temp);
	free(save.str);
}

int		ft_printf(const char *format, ...)
{
	char		tab_index[4];
	va_list 	ap;
	int 		pos;

	pos = 0;
	put_index(tab_index);
	va_start(ap, format);
	while (format[pos])
	{
		if (pos != 0 && format[pos - 1] == '%')
		{
			analyse(format, &pos, &ap, tab_index);
		}
		else if (format[pos] != '%')
			write(1, &format[pos], 1);
		pos++;
	}
	va_end(ap);
	return (0);
}