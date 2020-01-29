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

void	printf_char(va_list *ap, t_struct *box)
{
	char	c;
	int 	i;

	c = va_arg(*ap, int);
	(box->value)++;
	i = 0;
	if (box->width != 0)
	{
		write_space(box->width - 1, box);
		write(1, &c, 1);
	}
	else if (box->align_left != 0)
	{
		write(1, &c, 1);
		write_space(box->align_left - 1, box);
	}
	else
		write(1, &c, 1);
}
