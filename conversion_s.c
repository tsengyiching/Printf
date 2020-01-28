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

#include "ft_libft_printf.h"
#include "libft/libft.h"

void	printf_str(va_list *ap, t_struct *flags)
{
	char	*str;
	int		len;
	int		i;

	str = va_arg(*ap, char *);
	len = ft_strlen(str);
	i = 0;
	if (flags->space != -1 && flags->space > len)
	{
		while (i < flags->space - len)
		{
			write(1, " ", 1);
			i++;
		}
		write(1, str, ft_strlen(str));
	}
	else if (flags->left != -1 && flags->left > len)
	{
		write(1, str, ft_strlen(str));
		while (i < flags->left - len)
		{
			write(1, " ", 1);
			i++;
		}
	}
	else
		write(1, str, ft_strlen(str));
}