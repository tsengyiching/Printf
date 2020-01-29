/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   conversion_s.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 16:30:47 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 20:20:18 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"

int		printf_null(t_struct *box, char **str)
{
	box->snull = 1;
	*str = ft_strdup("(null)");
	return (6);
}

void	printf_str(va_list *ap, t_struct *box)
{
	char	*str;
	int		len;

	str = va_arg(*ap, char *);
	if (str == NULL)
		len = printf_null(box, &str);
	else
		len = ft_strlen(str);
	if (box->width != 0 && box->width > len)
	{
		write_space(box->width - len, box);
		ft_write(str, ft_strlen(str), box);
	}
	else if (box->align_left != 0 && box->align_left > len)
	{
		ft_write(str, ft_strlen(str), box);
		write_space(box->align_left - len, box);
	}
	else if (box->precision != 0 && box->precision < len)
		ft_write(str, box->precision, box);
	else
		ft_write(str, ft_strlen(str), box);
	if (box->snull == 1)
		free(str);
}
