#include "ft_libft_printf.h"
#include "libft/libft.h"

int		main(void)
{
	 printf("---------- c ----------\n");
	// ft_printf("my printf : [%c]\n", '\0');
	// dprintf(1, "-- printf : [%c]\n", '\0');
	dprintf(1, "  %d\n", ft_printf("my printf : [%10c]", 'a'));
	dprintf(1, "  %d\n", dprintf(1,"-- printf : [%10c]", 'a'));
	dprintf(1, "  %d\n", ft_printf("my printf : [%-10c]", 'a'));
	dprintf(1, "  %d\n", dprintf(1,"-- printf : [%-10c]", 'a'));
	printf("---------- s ----------\n");
	dprintf(1, "  %d\n", ft_printf("my printf : [%s]", "hello"));
	dprintf(1, "  %d\n", dprintf(1,"-- printf : [%s]", "hello"));
	dprintf(1, "  %d\n", ft_printf("my printf : [%10s]", "hello"));
	dprintf(1, "  %d\n", dprintf(1,"-- printf : [%10s]", "hello"));
	dprintf(1, "  %d\n", ft_printf("my printf : [%-10s]", "hello"));
	dprintf(1, "  %d\n", dprintf(1,"-- printf : [%-10s]", "hello"));
	dprintf(1, "  %d\n", ft_printf("my printf : [%.10s]", "hello"));
	dprintf(1, "  %d\n", dprintf(1,"-- printf : [%.10s]", "hello"));
	dprintf(1, "  %d\n", ft_printf("my printf : [%.3s]", "hello"));
	dprintf(1, "  %d\n", dprintf(1,"-- printf : [%.3s]", "hello"));
	// dprintf(1, "-- printf : [%-10s][%5s]\n", "hello", "hi");
	// ft_printf("-- printf : [%20.5s]\n", "hello");
	// dprintf(1, "-- printf : [%20.5s]\n", "hello");
	//ft_printf("%.4s", NULL);
	//dprintf(1, str);
	// printf("\n");
	// printf("---------- d ----------\n");
	// printf("\n");
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
