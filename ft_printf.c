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
	return (i);
}

int		ft_flags(const char *format, int *pos, t_struct *flags)
{
	if (format[*pos] == '-')
	 	return(ft_left_justify(format, pos, flags));
	// else if (format[pos] == '0')
	// 	return();
	if (format[*pos] >= '1' && format[*pos] <= '9')
		return(ft_space(format, pos, flags));
	// else if (format[pos] == '.')
	// 	return();
	// else if (format[pos] == '*')
	// 	return();

	printf("left : %d\n", flags->left_justify);
	printf("space : %d\n", flags->space);
	return (-1);
}

int		ft_printf_parse(const char *format, t_struct *flags, va_list *ap)
{
	char	tab_index[4];
	int		pos;
	int		index;
	int 	i;
	int		tmp;

	put_index(tab_index);
	pos = is_module(format);
	write(1, format, pos);
	i = 0;
	tmp = 0;
	while (format[pos])
	{
		pos++;
		while (tmp != -1)
			tmp = ft_flags(format, &pos, flags);
		if ((index = find_index(tab_index, format[pos])) != -1)
		{
			apply_conversions(index, ap, flags);
			pos++;
		}
		tmp = 0;
		i = is_module(format + pos);
		write(1, format + pos, i);
		pos = pos + i;
	}
	return (pos);   //need to add the size of results
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