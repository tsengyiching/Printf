# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2020/01/22 16:00:56 by yictseng     #+#   ##    ##    #+#        #
#    Updated: 2020/01/22 16:02:39 by yictseng    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

# **************************************************************************** #
# 								VARIABLES									   #
# **************************************************************************** #

NAME 		= libftprintf.a

HEADER 		= ft_libft_printf.h

LIB			= libft.a

LIBS		= libft/libft.a

SRCS		= ft_printf.c\
			  ft_printf_add.c\
			  ft_printf_init.c\
			  ft_write.c\
			  ft_flags.c\
			  ft_conversion_c.c\
			  ft_conversion_s.c\
			  ft_conversion_d.c\

OBJS 		= $(SRCS:.c=.o)

CC 			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

# **************************************************************************** #
#  								REGLES									       #
# **************************************************************************** #

all			: $(LIB) $(NAME)

$(NAME)		: $(OBJS) $(HEADER)
			  @cp libft/libft.a ./$(NAME)
			  ar rc $(NAME) $(OBJS)
			  ranlib $(NAME)

$(LIB)		: 		
			  @$(MAKE) -C libft all

%.o			: %.c $(HEADER) $(LIBS)
			  $(CC) $(CFLAGS) -c $< -I $(HEADER)

clean		:
			  @$(MAKE) -C libft clean
			  @$(RM) $(OBJS)

fclean		: clean
			  @$(MAKE) -C libft fclean
			  @$(RM) $(NAME)

re			: fclean all

.PHONY		: clean fclean all re