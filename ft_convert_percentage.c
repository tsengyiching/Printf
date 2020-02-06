/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_percetage.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/06 20:27:00 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/06 20:27:02 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"

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
