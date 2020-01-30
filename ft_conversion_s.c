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
	if (box->width != -1)
	{
		if (box->precision == -1)
		{
			if (box->width > len)
				write_space((box->width - len), box);
			ft_write(str, len, box);
		}
		else
		{
			if ((box->width) <= (box->precision) && (box->precision) < len)
				ft_write(str, box->precision, box);
			else
			{
				if (box->precision >= len)
					box->precision = len;
				write_space((box->width) - (box->precision), box);
				ft_write(str, box->precision, box);
			}
		}
	}
	else if (box->align_left != -1)
	{
		if (box->precision == -1)
		{
			ft_write(str, len, box);
			if (box->align_left > len)
				write_space((box->align_left - len), box);
		}
		else
		{
			if ((box->align_left) <= (box->precision) && (box->precision) < len)
				ft_write(str, box->precision, box);
			else
			{
				if (box->precision >= len)
					box->precision = len;
				ft_write(str, box->precision, box);
				write_space((box->align_left) - (box->precision), box);
			}
		}
	}
	else if (box->precision != -1)
	{
		if (box->precision > len)
			box->precision = len;
		ft_write(str, box->precision, box);
	}
	else
		ft_write(str, len, box);
	if (box->snull == 1)
		free(str);
}
