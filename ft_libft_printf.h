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

int		ft_printf(const char *format,
				...) __attribute__((format(printf,1,2)));

typedef struct		s_struct
{
    int             width;
    int             left; //rename
    int             zero;
    int             precision;
    int             star; // rename
    int             value;
}					t_struct;

void	printf_char(va_list *ap, t_struct *flags);
void	printf_str(va_list *ap, t_struct *flags);
//void	printf_nbr(va_list *ap, t_struct *flags);
void	put_index(char *tab_index);
int		find_index(char *tab_index, char element);
void	apply_conversions(int index, va_list *ap, t_struct *flags);
int		get_int(const char *str, int *pos);
int     ft_space(const char *format, int *pos, t_struct *flags);
int		ft_left_justify(const char *format, int *pos, t_struct *flags);
int		ft_precision(const char *format, int *pos, t_struct *flags);
#endif
