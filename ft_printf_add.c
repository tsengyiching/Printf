/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf_add.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/30 16:18:18 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/30 16:18:22 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"

int		get_percentage(const char *format)
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

int		get_int(const char *str, int *pos)
{
	long int	res;

	res = 0;
	if (str[*pos] == '-' || str[*pos] == '%' || str[*pos] == '.'
			|| str[*pos] == '0')
		(*pos)++;
	while (str[*pos] >= '0' && str[*pos] <= '9')
	{
		res = res * 10 + (str[*pos] - '0');
		(*pos)++;
	}
	return (res);
}

char	*put_int_to_str(int n)
{
	char	*str;
	int		len;
	int		nb;

	len = 1;
	nb = n;
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	if (!(str = ft_calloc(sizeof(char), (len + 1))))
		return (NULL);
	while (len - 1 >= 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
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