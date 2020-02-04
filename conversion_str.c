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

#include "libft_printf.h"

int		str_null(t_struct *box, char **str)
{
	box->snull = 1;
	*str = ft_strdup("(null)");
	return (6);
}

void	convert_str_width(char *str, int len, t_struct *box)
{
	if (box->precision == -1)
	{
		if (box->width > len)
			write_spaces((box->width - len), box);
		write_words(str, len, box);
	}
	else
	{
		if ((box->width) <= (box->precision) && (box->precision) < len)
			write_words(str, box->precision, box);
		else
		{
			if (box->precision >= len)
				box->precision = len;
			write_spaces((box->width) - (box->precision), box);
			write_words(str, box->precision, box);
		}
	}
}

void	convert_str_align(char *str, int len, t_struct *box)
{
	if (box->precision == -1)
	{
		write_words(str, len, box);
		if (box->align_left > len)
			write_spaces((box->align_left - len), box);
	}
	else
	{
		if ((box->align_left) <= (box->precision) && (box->precision) < len)
			write_words(str, box->precision, box);
		else
		{
			if (box->precision >= len)
				box->precision = len;
			write_words(str, box->precision, box);
			write_spaces((box->align_left) - (box->precision), box);
		}
	}
}

void	convert_str(va_list *ap, t_struct *box)
{
	char	*str;
	int		len;

	str = va_arg(*ap, char *);
	if (str == NULL)
		len = str_null(box, &str);
	else
		len = ft_strlen(str);
	if (box->width != -1)
		convert_str_width(str, len, box);
	else if (box->align_left != -1)
		convert_str_align(str, len, box);
	else if (box->precision != -1)
	{
		if (box->precision > len)
			box->precision = len;
		write_words(str, box->precision, box);
	}
	else
		write_words(str, len, box);
	if (box->snull == 1)
		free(str);
}
