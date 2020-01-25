/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversion_c.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 16:30:15 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 16:30:20 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"
#include "libft/libft.h"

void	printf_char(va_list *ap, t_struct *flags)
{
	char c;

	c = va_arg(*ap, int);
	if (flags->space != -1)
	{
		while (flags->space > 0)
    	{
        	write(1, " ", 1);
        	(flags->space)--;
    	}
		write(1, &c, 1);
	}
	else
		write(1, &c, 1);
}
