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

typedef struct		s_struct
{
    int             space;
    int             left_justify;
    int             zero;
    int             precision;
    int             star; // rename
}					t_struct;

void	printf_char(va_list *ap);
void	printf_str(va_list *ap);
void	printf_nbr(va_list *ap);
void	put_index(char *tab_index);
int		find_index(char *tab_index, char element);
void	apply_conversions(int index, va_list *ap);
int		get_int(const char *str, int *pos);
int     ft_space(const char *format, int *pos, t_struct *flags);
//int		ft_printf(const char *format, ...);
int		ft_printf(const char *format,
				...) __attribute__((format(printf,1,2)));
#endif
