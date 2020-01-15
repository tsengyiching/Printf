/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversion_d.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 16:30:37 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 16:30:40 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "printf_libft.h"
#include "libft/libft.h"

void	printf_nbr(va_list *ap)
{
	int nb;

	nb = va_arg(*ap, int);
	ft_putnbr_fd(nb, 1);
}
