/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_save_flags.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 17:44:50 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 17:44:53 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_libft_printf.h"

int		get_int(const char *str, int *pos)
{
	long int	res;

	res = 0;
	if (str[*pos] == '-' || str[*pos] == '%' || str[*pos] == '.')
		(*pos)++;
	while (str[*pos] >= '0' && str[*pos] <= '9')
	{
		res = res * 10 + (str[*pos] - '0');
		(*pos)++;
	}
	return (res);
}

int     flag_num(const char *format, int *pos, t_struct *box)
{
    box->width = get_int(format, pos);
    return (1);
}

int		flag_desh(const char *format, int *pos, t_struct *box)
{
	box->align_left = get_int(format, pos);
	return (1);
}

int		flag_point(const char *format, int *pos, t_struct *box)
{
	box->precision = get_int(format, pos);
	return (1);
}