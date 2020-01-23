/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/14 17:35:01 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/14 17:37:24 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"
#include "libft/libft.h"

int		find_module(const char *format)
{
	int i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			return (1);
		i++;
	}
	return (0);
}

int		is_module(const char *format)
{
	int i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			return (i);
		i++;
	}
	return (-1);
}

int		ft_flags(const char *format, int *pos, t_struct *flags)
{
	// if (format[pos] == '-')
	// 	return();
	// else if (format[pos] == '0')
	// 	return();
	if (format[*pos] >= '1' && format[*pos] <= '9')
		return(ft_space(format, pos, flags));
	// else if (format[pos] == '.')
	// 	return();
	// else if (format[pos] == '*')
	// 	return();
	return (-1);
}

int		ft_printf_parse(const char *format, t_struct *flags, va_list *ap)
{
	int		len;
	int		pos;
	char	tab_index[4];
	int		index;
	int 	i;

	if (!find_module(format))
	{
		ft_putstr_fd((char *)format, 1);
		len = ft_strlen(format);
	}
	else
	{
		put_index(tab_index);
		if ((len = is_module(format)) != -1)
			write(1, format, len);
		pos = len + 1;
		i = ft_flags(format, &pos, flags);
		index = find_index(tab_index, format[pos]);
		if (index != -1)
			apply_conversions(index, ap);
	}
	return (len);   //need to add the size of results
}

int		ft_printf(const char *format, ...)
{
	va_list 	ap;
	t_struct	flags;
	int			len;

	va_start(ap, format);
	ft_memset((void*)&flags, -1, sizeof(t_struct));
	len = ft_printf_parse(format, &flags, &ap);
	va_end(ap);
	return (len);   //need to add the size of results
}