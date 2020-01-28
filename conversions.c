/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversions.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/14 17:35:01 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/14 17:37:24 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"
#include "libft/libft.h"

void	ft_write(char c, t_struct *flags)
{
	write(1, &c, 1);
	flags->value++;
}

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

void	apply_conversions(int index, va_list *ap, t_struct *flags)
{
	void 	(*ptr_function[3]) (va_list *, t_struct *);
    ptr_function[0] = &printf_char;
	ptr_function[1] = &printf_str;
	//ptr_function[2] = &printf_nbr;

    (*ptr_function[index]) (ap, flags);
}