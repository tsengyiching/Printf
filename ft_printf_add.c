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

#include "libft_printf.h"

int		get_percentage_index(const char *format)
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

char	*ft_utoa_base(unsigned long nb, char *base)
{
	char			*str;
	unsigned long 	base_len;
	unsigned long	res_len;
	unsigned long 	n;

	n = nb;
	res_len = 1;
	base_len = ft_strlen(base);
	while (n > (base_len - 1))
	{
		n = n / base_len;
		res_len++;
	}
	if (!(str = malloc(sizeof(char) * (res_len + 1))))
		return (NULL);
	str[res_len] = '\0';
	while (res_len > 0)
	{
		str[res_len - 1] = base[nb % base_len];
		nb = nb / base_len;
		res_len--;
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
