/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversion_c.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 16:30:15 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 20:15:42 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"

void	convert_char(va_list *ap, t_struct *box)
{
	char	c;

	c = va_arg(*ap, int);
	(box->value)++;
	if (box->width != -1)
		write_spaces(box->width - 1, box);
	write(1, &c, 1);
	if (box->align_left != -1)
		write_spaces(box->align_left - 1, box);
}

void	convert_percentage(t_struct *box)
{
	char	c;

	c = '%';
	(box->value)++;
	if (box->width != -1)
		write_spaces(box->width - 1, box);
	write(1, &c, 1);
	if (box->align_left != -1)
		write_spaces(box->align_left - 1, box);
}
