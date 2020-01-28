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

//need to put write_space function to another file
void	write_space(int nb)
{
	int		i;

	i = 0;
	while (i < nb)
	{
		write(1, " ", 1);
		i++;
	}
}

void	printf_str(va_list *ap, t_struct *flags)
{
	char	*str;
	int		len;
	int		i;

	str = va_arg(*ap, char *);
	len = ft_strlen(str);
	i = 0;
	if (flags->width != -1 && flags->width > len)
	{
		write_space(flags->width - len);
		write(1, str, ft_strlen(str));
	}
	else if (flags->left != -1 && flags->left > len)
	{
		write(1, str, ft_strlen(str));
		write_space(flags->left - len);
	}
	else if (flags->precision != -1 && flags->precision < len)
		write(1, str, flags->precision);
	else
		write(1, str, ft_strlen(str));
}