/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_libft_printf.h                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 19:14:23 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 20:28:16 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_LIBFT_PRINTF_H
# define FT_LIBFT_PRINTF_H
# include <stdarg.h>
# include <stdio.h> // test only
# include <unistd.h>
# include "libft/libft.h"

int					ft_printf(const char *format, ...)
						 __attribute__((format(printf, 1, 2)));

typedef struct		s_struct
{
	int				width;
	int				align_left;
	int				zero;
	int				precision;
	int				option;
	int				value;
	int				snull;
}					t_struct;

void				init_box(t_struct *box);
void				convert_char(va_list *ap, t_struct *flags);
void				convert_str(va_list *ap, t_struct *flags);
void				convert_nbr(va_list *ap, t_struct *flags);
void				init_tab_index(char *tab_index);
int					find_index(char *tab_index, char element);
void				apply_conversions(int index, va_list *ap, t_struct *flags);
int					get_int(const char *str, int *pos);
int					get_percentage(const char *format);
void				write_words(const char *str, int i, t_struct *box);
void				write_spaces(int nb, t_struct *box);
void				write_zeros(int nb, t_struct *box);
char				*put_int_to_str(int n);
int					put_width(const char *format, int *pos, t_struct *flags);
int					put_align_left(const char *format, int *pos, t_struct *flags);
int					put_precision(const char *format, int *pos, t_struct *flags);
int					put_option(int *pos, va_list *ap, t_struct *box);
int					put_zero(const char *format, int *pos, t_struct *box);
int					printf_null(t_struct *flags, char **str);
#endif
