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

int		get_int(const char *str, int *pos)
{
	long int	res;

	res = 0;
	if (str[*pos] == '-' || str[*pos] == '%' || str[*pos] == '.')
		(*pos)++;
	while (str[*pos] >= '0' && str[*pos] <= '9')
	{
		res = res * 10 + (str[*pos] - '0');
		(*pos)++;
	}
	return (res);
}

void	ft_write(const char *str, int i, t_struct *box)
{
	write(1, str, i);
	box->value += i;
}

void	write_space(int nb, t_struct *box)
{
	int		i;

	i = 0;
	while (i < nb)
	{
		write(1, " ", 1);
		(box->value)++;
		i++;
	}
}

void	write_zero(int nb, t_struct *box)
{
	int		i;

	i = 0;
	while (i < nb)
	{
		write(1, "0", 1);
		(box->value)++;
		i++;
	}
}

// void	ft_write_num(int n, t_struct *box)
// {
// 	long int	nb;
// 	char		*str;

// 	nb = n;
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		(box->value)++;
// 		nb = nb * -1;
// 	}
// 	if (nb > 9)
// 	{
// 		ft_write_num(nb / 10, box);
// 		ft_write_num(nb % 10, box);
// 	}
// 	else
// 	{
// 		str = ft_itoa(nb);
// 		write(1, str, 1);
// 		(box->value)++;
// 		free(str);
// 	}
// }

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
