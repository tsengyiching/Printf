/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_libft_printf.h                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 19:14:23 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 19:16:47 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_LIBFT_PRINTF_H
# define FT_LIBFT_PRINTF_H
# include <stdarg.h>
# include <stdio.h> // test only
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format,
				...) __attribute__((format(printf,1,2)));

typedef struct		s_struct
{
    int             width;
    int             align_left;
    int             zero;
    int             precision;
    int             option;
    int             value;
    int             snull;
}					t_struct;

void	init_box(t_struct *box);
void	printf_char(va_list *ap, t_struct *flags);
void	printf_str(va_list *ap, t_struct *flags);
//void	printf_nbr(va_list *ap, t_struct *flags);
void	put_index(char *tab_index);
int		find_index(char *tab_index, char element);
void	apply_conversions(int index, va_list *ap, t_struct *flags);
int		get_int(const char *str, int *pos);
void	ft_write(const char *str, int i, t_struct *box);
void	write_space(int nb, t_struct *box);
int     flag_num(const char *format, int *pos, t_struct *flags);
int		flag_desh(const char *format, int *pos, t_struct *flags);
int		flag_point(const char *format, int *pos, t_struct *flags);



int		printf_null(t_struct *flags, char **str);

#endif
