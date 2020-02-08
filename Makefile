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

HEADER 		= libftprintf.h

LIB			= libft.a

LIBS		= libft/libft.a

SRCS		= ft_printf.c\
			  ft_printf_add.c\
			  ft_printf_init.c\
			  ft_write_words.c\
			  ft_write_nbr.c\
			  ft_flags.c\
			  ft_convert_c.c\
			  ft_convert_d.c\
			  ft_convert_s.c\
			  ft_convert_uxp.c\

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