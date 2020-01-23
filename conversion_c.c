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

void	printf_char(va_list *ap)
{
	char c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
}
