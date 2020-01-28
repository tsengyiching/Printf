#include "ft_libft_printf.h"
#include "libft/libft.h"

int		main(void)
{
	// printf("---------- c ----------\n");
	// printf("\n");
	// ft_printf("my printf : [%c]\n", '\0');
	// dprintf(1, "-- printf : [%c]\n", '\0');
	// printf("\n");
	printf("---------- s ----------\n");
	printf("\n");
	// ft_printf("my printf : [%-10s][%5s]\n", "hello", "hi");
	// dprintf(1, "-- printf : [%-10s][%5s]\n", "hello", "hi");
	ft_printf("-- printf : [%20.5s]\n", "hello");
	dprintf(1, "-- printf : [%20.5s]\n", "hello");
	printf("\n");
	//printf("-- print : [%10.3s]\n", "hello");
	//printf("-- print : %10s\n", "hello");
	//printf("print : %10.3s\n", "hello");
	//printf("-print char : [%*.c]", '10', 'A');
	//printf("print char: [%5c] [%10c]\n", 'a', 'y');
	//ft_printf("print string : %s\n", "hello");
	// printf("print nb: %d %c \n", 42, 'a');
	// printf("print string : %s\n", "hello");
	// printf("%c\n", 'a');
	// printf("%10c\n", 't');
	// printf("%-10c\n", 't');
	// printf("%1c\n", 'y');
	// int i = -2147483648;
	// printf("%d\n", i);
	// printf("%d\n", ft_printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	// printf("%d\n", printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	return (0);
}
