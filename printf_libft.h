/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_libft.h                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 19:14:23 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 19:16:47 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PRINTF_LIBFT_H
# define PRINTF_LIBFT_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// typedef struct		s_struct
// {
//     char    *str;
// }					t_struct;

void	printf_char(va_list *ap);
void	printf_str(va_list *ap);
void	printf_nbr(va_list *ap);
int		ft_printf(const char *format, ...);
#endif
