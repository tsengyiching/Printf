#include "ft_libft_printf.h"
#include "libft/libft.h"

int		main(void)
{
	printf("----------------------------- c -----------------------------\n");

	// ft_printf("my printf : [%c]\n", '\0');
	// dprintf(1, "-- printf : [%c]\n", '\0');
	// dprintf(1, "  %d\n", ft_printf("my printf : [%10c]", 'a'));
	// dprintf(1, "  %d\n", dprintf(1,"-- printf : [%10c]", 'a'));
	// dprintf(1, "  %d\n", ft_printf("my printf : [%-10c]", 'a'));
	// dprintf(1, "  %d\n", dprintf(1,"-- printf : [%-10c]", 'a'));
	// dprintf(1, "  %d\n", ft_printf("my printf : [%*c]", -5, 0));
	// dprintf(1, "  %d\n", dprintf(1,"-- printf : [%*c]", -5, 0));
	// dprintf(1, "  %d\n", ft_printf("my printf : [%*c]", -5, 'a'));
	// dprintf(1, "  %d\n", dprintf(1,"-- printf : [%*c]", -5, 'a'));

	printf("----------------------------- s-----------------------------\n");
	
	// dprintf(1, "  %d\n", ft_printf("1 my printf : [%s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"1 -- printf : [%s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("2 my printf : [%10s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"2 -- printf : [%10s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("6 my printf : [%10.3s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"6 -- printf : [%10.3s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("10 my printf : [%6.3s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"10 -- printf : [%6.3s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("11 my printf : [%4s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"11 -- printf : [%4s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("12 my printf : [%5.10s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"12 -- printf : [%5.10s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("13 my printf : [%10.5s]", "hey"));
	// dprintf(1, "  %d\n", dprintf(1,"13 -- printf : [%10.5s]", "hey"));
	// dprintf(1, "  %d\n", ft_printf("20 my printf : [%2.0s]", "hey"));
	// dprintf(1, "  %d\n", dprintf(1,"20 -- printf : [%2.0s]", "hey"));
	// dprintf(1, "  %d\n", ft_printf("21 my printf : [%1.2s]", "hey"));
	// dprintf(1, "  %d\n", dprintf(1,"21 -- printf : [%1.2s]", "hey"));
	// dprintf(1, "  %d\n", ft_printf("22 my printf : [%3.3s]", "hey"));
	// dprintf(1, "  %d\n", dprintf(1,"22 -- printf : [%3.3s]", "hey"));
	// dprintf(1, "  %d\n", ft_printf("23 my printf : [%10.3s]", "hey"));
	// dprintf(1, "  %d\n", dprintf(1,"23 -- printf : [%10.3s]", "hey"));
	// dprintf(1, "  %d\n", ft_printf("24 my printf : [%3s]", "hey"));
	// dprintf(1, "  %d\n", dprintf(1,"24 -- printf : [%3s]", "hey"));
	// dprintf(1, "  %d\n", ft_printf("3 my printf : [%-10s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"3 -- printf : [%-10s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("7 my printf : [%-10.4s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"7 -- printf : [%-10.4s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("8 my printf : [%-6.4s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"8 -- printf : [%-6.4s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("9 my printf : [%-3.1s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"9 -- printf : [%-3.1s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("14 my printf : [%-3.6s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"14 -- printf : [%-3.6s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("15 my printf : [%-4.10s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"15 -- printf : [%-4.10s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("16 my printf : [%-10.2s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"16 -- printf : [%-10.2s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("17 my printf : [%-1.1s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"17 -- printf : [%-1.1s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("4 my printf : [%.5s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"4 -- printf : [%.5s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("5 my printf : [%.0s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"5 -- printf : [%.0s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("30 my printf : [%.20s]", "hello"));
	// dprintf(1, "  %d\n", dprintf(1,"30 -- printf : [%.20s]", "hello"));
	// dprintf(1, "  %d\n", ft_printf("30 my printf : [%-10s]", NULL));
	// dprintf(1, "  %d\n", dprintf(1,"30 -- printf : [%-10s]", NULL));
	// dprintf(1, "  %d\n", ft_printf("33 my printf : [%*s]", 13, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"33 -- printf : [%*s]", 13, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("34 my printf : [%*.*s]", 10, 3, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"34 -- printf : [%*.*s]", 10, 3, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("35 my printf : [%.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"35 -- printf : [%.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("36 my printf : [%10.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"36 -- printf : [%10.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("37 my printf : [%*.5s]", 10, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"37 -- printf : [%*.5s]", 10, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("38 my printf : [%*.2s]", 10, NULL));
	// dprintf(1, "  %d\n", dprintf(1,"38 -- printf : [%*.2s]", 10, NULL));
	// dprintf(1, "  %d\n", ft_printf("38 my printf : [%*.*s]", -10, 5, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"38 -- printf : [%*.*s]", -10, 5, "bonjour"));
	
	printf("----------------------------- d -----------------------------\n");
	
	printf("------------------------- d positive-------------------------\n");
	// ft_printf("  %d\n", ft_printf("1 my printf : [%d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%d]", 42));
	// ft_printf("  %d\n", ft_printf("2 my printf : [%10d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%10d]", 42));
	// ft_printf("  %d\n", ft_printf("3 my printf : [%1d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%1d]", 42));
	// ft_printf("  %d\n", ft_printf("4 my printf : [%2d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%2d]", 42));
	// ft_printf("  %d\n", ft_printf("5 my printf : [%-10d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%-10d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%.3d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%.10d]", 12345));
	// ft_printf("  %d\n", ft_printf("8 my printf : [%5.3d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%5.3d]", 12345));
	// ft_printf("  %d\n", ft_printf("9 my printf : [%8.10d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%8.10d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "10 -- printf : [%10.8d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "11 -- printf : [%10.3d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%10.5d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "13 -- printf : [%8.10d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "14 -- printf : [%7.8d]", 123456789));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%7.9d]", 123456789));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%010d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%010.8d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%0.0d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%0.0d]", 0)); // ***
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%.0d]", 0)); // ***
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%0d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "20 -- printf : [%010.0d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "21 -- printf : [%.0d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "22 -- printf : [%0d]", 12345));

	printf("------------------------- d negative-------------------------\n");

	// dprintf(1, "  %d\n", dprintf(1, "10 -- printf : [%10.8d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "11 -- printf : [%10.3d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%10.5d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%10.6d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "13 -- printf : [%8.10d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "14 -- printf : [%7.8d]", -123456789));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%7.9d]", -123456789));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%010d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%010.8d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%0.0d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%010.0d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "20 -- printf : [%.0d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "21 -- printf : [%0d]", -12345));
	// ft_printf("  %d\n", ft_printf("14 my printf : [%10d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "14 -- printf : [%10d]", -42));
	// ft_printf("  %d\n", ft_printf("15 my printf : [%3d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%3d]", -42));
	// ft_printf("  %d\n", ft_printf("15 my printf : [%1d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%1d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%-10d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%010d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%010d]", -42));

	printf("---------------------------- mix ----------------------------\n");
	
	// dprintf(1, "  %d\n", ft_printf("31 my printf : [%.20s]%10s%-5s", "hello", "bonjour", "hi"));
	// dprintf(1, "  %d\n", dprintf(1,"31 -- printf : [%.20s]%10s%-5s", "hello", "bonjour", "hi"));
	// dprintf(1, "  %d\n", ft_printf("32 my printf : [%.10s]%10c%-4c", "hello", 'c', 'A'));
	// dprintf(1, "  %d\n", dprintf(1,"32 -- printf : [%.10s]%10c%-4c", "hello", 'c', 'A'));
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
