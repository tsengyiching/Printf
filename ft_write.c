/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/31 22:01:38 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/31 22:24:36 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"

void	write_words(const char *str, int i, t_struct *box)
{
	write(1, str, i);
	box->value += i;
}

void	write_spaces(int nb, t_struct *box)
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

void	write_zeros(int nb, t_struct *box)
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
