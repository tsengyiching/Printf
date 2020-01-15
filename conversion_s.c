/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversion_s.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 16:30:47 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 16:30:50 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "printf_libft.h"
#include "libft/libft.h"

void	printf_str(va_list *ap)
{
	char *str;

	str = va_arg(*ap, char *);
	write(1, str, ft_strlen(str));
}