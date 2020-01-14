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

void	printf_char(va_list *ap)
{
	char c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
}

void	printf_str(va_list *ap)
{
	char *str;

	str = va_arg(*ap, char *);
	write(1, str, ft_strlen(str));
}

void	printf_nbr(va_list *ap)
{
	int nb;

	nb = va_arg(*ap, int);
	ft_putnbr_fd(nb, 1);
}

void	put_tab(char *tab_index)
{
	tab_index[0] = 'c';
	tab_index[1] = 's';
	tab_index[2] = 'd';
	tab_index[3] = 0;
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
	void (*tab_function[3]) (va_list *);
	char	tab_index[4];
	va_list ap;
	int 	pos;
	int		temp;

	pos = 0;
	temp = 0;
	put_tab(tab_index);
	tab_function[0] = printf_char;
	tab_function[1] = printf_str;
	tab_function[2] = printf_nbr;
	va_start(ap, format);
	while (format[pos])
	{
		if (pos != 0 && format[pos - 1] == '%')
		{
			temp = find_index(tab_index, format[pos]);
			if (temp != -1)
				(*tab_function[temp]) (&ap);
		}
		else if (format[pos] != '%')
			write(1, &format[pos], 1);
		pos++;
	}
	va_end(ap);
	return (0);
}
