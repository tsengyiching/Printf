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
	int				neg;
	int				value;
	int				snull;
}					t_struct;

void				init_tab_index(char *tab_index);
void				init_box(t_struct *box);
void				apply_conversion(int index, va_list *ap, t_struct *flags);

void				convert_char(va_list *ap, t_struct *flags);
void				convert_str(va_list *ap, t_struct *flags);
void				convert_str_width(char *str, int len, t_struct *box);
void				convert_str_align(char *str, int len, t_struct *box);
void				convert_decimal(va_list *ap, t_struct *flags);
void				nb_is_neg(long *nb, t_struct *box);
void				convert_unsigned_int(va_list *ap, t_struct *box);
void				convert_hexa(va_list *ap, t_struct *box);
void				convert_hexa_cap(va_list *ap, t_struct *box);
void				convert_address(va_list *ap, t_struct *box);
void				convert_percentage(t_struct *box);
int					find_index(char *tab_index, char element);
int					get_int(const char *str, int *pos);
int					get_percentage_index(const char *format);
char				*ft_utoa_base(unsigned long long int nb, char *base);

void				write_words(const char *str, int i, t_struct *box);
void				write_spaces(int nb, t_struct *box);
void				write_zeros(int nb, t_struct *box);

void				write_nbr(char *str_nb, int len, int index_zero, t_struct *box);
void				add_spaces_n_init(int *len, t_struct *box);
void				do_align_right(char *str_nb, int len, t_struct *box);
void				do_align_left(char *str_nb, int len, t_struct *box);
void				add_spaces_or_zeros(char *str_nb, int len, t_struct *box);

int					put_width(const char *format, int *pos, t_struct *flags);
int					put_align_left(const char *format, int *pos, t_struct *flags);
int					put_precision(const char *format, int *pos, t_struct *flags);
int					put_option(int *pos, va_list *ap, t_struct *box);
int					put_zero(const char *format, int *pos, t_struct *box);
int					str_null(t_struct *flags, char **str);
#endif
