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
#include "libft/libft.h"

int		get_int(const char *str, int *pos)
{
	long int	res;

	res = 0;
	if (str[*pos] == '-' || str[*pos] == '%')
		(*pos)++;
	while (str[*pos] >= '0' && str[*pos] <= '9')
	{
		res = res * 10 + (str[*pos] - '0');
		(*pos)++;
	}
	return (res);
}

int     ft_space(const char *format, int *pos, t_struct *flags)
{
    flags->space = get_int(format, pos) - 1;
    return (1);
}

int		ft_left_justify(const char *format, int *pos, t_struct *flags)
{
	flags->left_justify = get_int(format, pos) - 1;
	return (1);
}