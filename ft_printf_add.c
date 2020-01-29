/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversions.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/14 17:35:01 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 20:23:59 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"

void	init_box(t_struct *box)
{
	box->width = 0;
	box->align_left = 0;
	box->zero = 0;
	box->precision = 0;
	box->option = 0;
	box->snull = 0;
}

void	put_index(char *tab_index)
{
	tab_index[0] = 'c';
	tab_index[1] = 's';
	tab_index[2] = 'd';
	tab_index[3] = 0;
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

void	apply_conversions(int index, va_list *ap, t_struct *box)
{
	void	(*ptr_function[3]) (va_list *, t_struct *);

	ptr_function[0] = &printf_char;
	ptr_function[1] = &printf_str;
	//ptr_function[2] = &printf_nbr;
	(*ptr_function[index])(ap, box);
}
