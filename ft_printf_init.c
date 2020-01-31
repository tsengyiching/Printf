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
	box->width = -1;
	box->align_left = -1;
	box->zero = -1;
	box->precision = -1;
	box->option = -1;
	box->snull = -1;
}

void	put_index(char *tab_index)
{
	tab_index[0] = 'c';
	tab_index[1] = 's';
	tab_index[2] = 'd';
	tab_index[3] = 0;
}

void	apply_conversions(int index, va_list *ap, t_struct *box)
{
	void	(*ptr_function[3]) (va_list *, t_struct *);

	ptr_function[0] = &convert_char;
	ptr_function[1] = &convert_str;
	ptr_function[2] = &convert_nbr;
	(*ptr_function[index])(ap, box);
}
