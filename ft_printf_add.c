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