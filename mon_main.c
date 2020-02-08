#include "libft_printf.h"
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
	
	//ft_printf("  %d\n", ft_printf("38 my printf : [%.s]", 42));
	//dprintf(1, "  %d\n", dprintf(1, "38 my printf : [%.s]", 42));
	// ft_printf("  %d\n", ft_printf("38 my printf : [%.*s]", -3, "Hello")); //***
	// dprintf(1, "  %d\n", dprintf(1, "38 -- printf : [%.*s]", -3, "Hello")); //***
	// ft_printf("  %d\n", ft_printf("38 my printf : [%*.*s]", 0, -5, "Hello")); //***
	// dprintf(1, "  %d\n", dprintf(1, "38 -- printf : [%*.*s]", 0, -5, "Hello")); //***
	//printf("for special cas * : %.*s\n", -3, NULL);
	//printf("for special cas : %.-3s\n", "hello");
	// ft_printf("  %d\n", ft_printf("38 my printf : [%4.5s]", "123"));
	// dprintf(1, "  %d\n", dprintf(1, "38 my printf : [%4.5s]", "123"));
//71 - ("%*s", -1000, "") : FAILED
	
	// ft_printf( "  %d\n", ft_printf("33 -- printf : [%*s]", 13, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"33 -- printf : [%*s]", 13, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("34 my printf : [%*.*s]", 10, 3, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"34 -- printf : [%*.*s]", 10, 3, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("35 my printf : [%.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"35 -- printf : [%.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("36 my printf : [%10.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"36 -- printf : [%10.*s]", 1, "bonjour"));
	// dprintf(1, "  %d\n", ft_printf("37 my printf : [%*.5s]", 10, "bonjour"));
	// dprintf(1, "  %d\n", dprintf(1,"37 -- printf : [%*.5s]", 10, "bonjour"));

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
	// ft_printf("  %d\n", ft_printf("6 my printf : [%.3d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%.3d]", 12345));
	// ft_printf("  %d\n", ft_printf("7 my printf : [%.10d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%.10d]", 12345));
	// ft_printf("  %d\n", ft_printf("8 my printf : [%5.3d]", 12345)); 
	// dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%5.3d]", 12345)); 
	// ft_printf("  %d\n", ft_printf("9 my printf : [%8.10d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%8.10d]", 12345));
	// ft_printf("  %d\n", ft_printf("10 my printf : [%10.8d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "10 -- printf : [%10.8d]", 12345));

	// ft_printf("  %d\n", ft_printf("11 my printf : [%10.3d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "11 -- printf : [%10.3d]", 12345));

	// ft_printf("  %d\n", ft_printf("12 my printf : [%10.5d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%10.5d]", 12345));

	// ft_printf("  %d\n", ft_printf("13 my printf : [%8.10d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "13 -- printf : [%8.10d]", 12345));
	// ft_printf("  %d\n", ft_printf("14 my printf : [%7.8d]", 123456789));
	// dprintf(1, "  %d\n", dprintf(1, "14 -- printf : [%7.8d]", 123456789));
	// ft_printf("  %d\n", ft_printf("15 my printf : [%7.9d]", 123456789));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%7.9d]", 123456789));

	// ft_printf("  %d\n", ft_printf("16 my printf : [%-10.5d]", 123));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%-10.5d]", 123));
	// ft_printf("  %d\n", ft_printf("17 my printf : [%-10.3d]", 123));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%-10.3d]", 123));
	// ft_printf("  %d\n", ft_printf("18 my printf : [%-5.10d]", 123456));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%-5.10d]", 123456));
	// ft_printf("  %d\n", ft_printf("19 my printf : [%-3.5d]", 123456));
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%-3.5d]", 123456));
	// ft_printf("  %d\n", ft_printf("20 my printf : [%-3.6d]", 123456));
	// dprintf(1, "  %d\n", dprintf(1, "20 -- printf : [%-3.6d]", 123456));
	// ft_printf("  %d\n", ft_printf("15 my printf : [%020.15d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%020.15d]", 42));
	// ft_printf("  %d\n", ft_printf("16 my printf : [%010d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%010d]", 12345));
	// ft_printf("  %d\n", ft_printf("17 my printf : [%010.8d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%010.8d]", 12345));
	// ft_printf("  %d\n", ft_printf("18 my printf : [%04d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%04d]", 12345));

	// ft_printf("  %d\n", ft_printf("18 my printf : [%0.0d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%0.0d]", 12345));
	// ft_printf("  %d\n", ft_printf("19 my printf : [%0.0d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%0.0d]", 0)); 
	// ft_printf("  %d\n", ft_printf("20 my printf : [%.0d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "20 -- printf : [%.0d]", 0));
	// ft_printf("  %d\n", ft_printf("21 my printf : [%10.0d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "21 -- printf : [%10.0d]", 0)); 
	// ft_printf("  %d\n", ft_printf("22 my printf : [%0d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "22 -- printf : [%0d]", 0));
	// ft_printf("  %d\n", ft_printf("23 my printf : [%d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "23 -- printf : [%d]", 0));
	// dprintf(1, "  %d\n", ft_printf("24 my printf : [%010.0d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "24 -- printf : [%010.0d]", 12345));
	// ft_printf("  %d\n", ft_printf("25 my printf : [%.0d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "25 -- printf : [%.0d]", 12345));
	// ft_printf("  %d\n", ft_printf("26 my printf : [%0d]", 12345));
	// dprintf(1, "  %d\n", dprintf(1, "26 -- printf : [%0d]", 12345));

	// ft_printf("  %d\n", ft_printf("27 my printf : [%d]", 2147483647));
	// dprintf(1, "  %d\n", dprintf(1, "27 -- printf : [%d]", 2147483647));

	// ft_printf("  %d\n", ft_printf("1 my printf : [%*d]", 10, 123));
	// dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%*d]", 10, 123));
	// ft_printf("  %d\n", ft_printf("2 my printf : [%.*d]", 10, 123));
	// dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%.*d]", 10, 123));
	// ft_printf("  %d\n", ft_printf("3 my printf : [%*d]", -10, 123));
	// dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%*d]", -10, 123));
	// ft_printf("  %d\n", ft_printf("4 my printf : [%*.*d]", 10, 2, 123));
	// dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%*.*d]", 10, 2, 123));
	// ft_printf("  %d\n", ft_printf("5 my printf : [%*.*d]", 10, 5, 123));
	// dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%*.*d]", 10, 5, 123));
	// ft_printf("  %d\n", ft_printf("6 my printf : [%*.*d]", -10, 5, 123));
	// dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%*.*d]", -10, 5, 123));
	// ft_printf("  %d\n", ft_printf("7 my printf : [%*.5d]", -10, 123));
	// dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%*.5d]", -10, 123));
	// ft_printf("  %d\n", ft_printf("8 my printf : [%*d]", 0, 123));
	// dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%*d]", 0, 123));
	// ft_printf("  %d\n", ft_printf("9 my printf : [%.*d]", 0, 123));
	// dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%.*d]", 0, 123));
	// ft_printf("  %d\n", ft_printf("10 my printf : [%.*d]", 0, 0));
	// dprintf(1, "  %d\n", dprintf(1, "10 -- printf : [%.*d]", 0, 0));
	// ft_printf("  %d\n", ft_printf("11 my printf : [%10.*d]", 0, 0));
	// dprintf(1, "  %d\n", dprintf(1, "11 -- printf : [%10.*d]", 0, 0));
	// ft_printf("  %d\n", ft_printf("12 my printf : [%*.*d]", 10, 0, 0));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%*.*d]", 10, 0, 0));
	
	// ft_printf("  %d\n", ft_printf("13 my printf : [%0d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "13 -- printf : [%0d]", 0));
	// ft_printf("  %d\n", ft_printf("14 my printf : [%*d]", 0, 0));
	// dprintf(1, "  %d\n", dprintf(1, "14 -- printf : [%*d]", 0, 0));


	printf("------------------------- d negative-------------------------\n");

	// ft_printf("  %d\n", ft_printf("1 my printf : [%d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%d]", -42));
	// ft_printf("  %d\n", ft_printf("2 my printf : [%10d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%10d]", -42));
	// ft_printf("  %d\n", ft_printf("10 my printf : [%8.10d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "10 -- printf : [%8.10d]", -12345));
	// ft_printf("  %d\n", ft_printf("11 my printf : [%10.3d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "11 -- printf : [%10.3d]", -12345));
	// ft_printf("  %d\n", ft_printf("12 my printf : [%10.5d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%10.5d]", -12345));
	// ft_printf("  %d\n", ft_printf("13 my printf : [%10.6d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "13 -- printf : [%10.6d]", -12345));
	// ft_printf("  %d\n", ft_printf("14 my printf : [%7.8d]", -123456789));
	// dprintf(1, "  %d\n", dprintf(1, "14 -- printf : [%7.8d]", -123456789));
	// ft_printf("  %d\n", ft_printf("15 my printf : [%7.9d]", -123456789));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%7.9d]", -123456789));

	// ft_printf("  %d\n", ft_printf("16 my printf : [%-10.5d]", -123));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%-10.5d]", -123));
	// ft_printf("  %d\n", ft_printf("17 my printf : [%-10.3d]", -123));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%-10.3d]", -123));
	// ft_printf("  %d\n", ft_printf("18 my printf : [%-5.10d]", -123456));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%-5.10d]", -123456));
	// ft_printf("  %d\n", ft_printf("19 my printf : [%-3.5d]", -123456));
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%-3.5d]", -123456));
	// ft_printf("  %d\n", ft_printf("20 my printf : [%-3.6d]", -123456));
	// dprintf(1, "  %d\n", dprintf(1, "20 -- printf : [%-3.6d]", -123456));

	// ft_printf("  %d\n", ft_printf("15 my printf : [%020.15d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%020.15d]", -42));
	// ft_printf("  %d\n", ft_printf("16 my printf : [%010d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%010d]", -12345));
	// ft_printf("  %d\n", ft_printf("17 my printf : [%010.8d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%010.8d]", -12345));
	// ft_printf("  %d\n", ft_printf("18 my printf : [%04d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%04d]", -12345));

	// ft_printf("  %d\n", ft_printf("6 my printf : [%.3d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%.3d]", -12345));
	// ft_printf("  %d\n", ft_printf("7 my printf : [%.10d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%.10d]", -12345));

	// ft_printf("  %d\n", ft_printf("14 my printf : [%10d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "14 -- printf : [%10d]", -42));
	// ft_printf("  %d\n", ft_printf("15 my printf : [%3d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%3d]", -42));

	// ft_printf("  %d\n", ft_printf("15 my printf : [%1d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%1d]", -42));
	// ft_printf("  %d\n", ft_printf("16 my printf : [%010d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%010d]", -12345));
	// ft_printf("  %d\n", ft_printf("17 -- printf : [%010.8d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%010.8d]", -12345));
	// ft_printf("  %d\n", ft_printf("18 -- printf : [%0.0d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "18 -- printf : [%0.0d]", -12345));
	// ft_printf("  %d\n", ft_printf("19 -- printf : [%010.0d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "19 -- printf : [%010.0d]", -12345));
	// ft_printf("  %d\n", ft_printf("20 -- printf : [%.0d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "20 -- printf : [%.0d]", -12345));
	// ft_printf("  %d\n", ft_printf("21 -- printf : [%0d]", -12345));
	// dprintf(1, "  %d\n", dprintf(1, "21 -- printf : [%0d]", -12345));
	// ft_printf("  %d\n", ft_printf("15 -- printf : [%-10d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "15 -- printf : [%-10d]", -42));
	// ft_printf("  %d\n", ft_printf("16 -- printf : [%010d]", 42));
	// dprintf(1, "  %d\n", dprintf(1, "16 -- printf : [%010d]", 42));
	// ft_printf("  %d\n", ft_printf("17 -- printf : [%010d]", -42));
	// dprintf(1, "  %d\n", dprintf(1, "17 -- printf : [%010d]", -42));

	// int n = -2147483648;
	// ft_printf("  %d\n", ft_printf("27 my printf : [%d]", n));
	// dprintf(1, "  %d\n", dprintf(1, "29 -- printf : [%d]", n));

	// ft_printf("  %d\n", ft_printf("0 my printf : [%*d]", -1, -123));
	// dprintf(1, "  %d\n", dprintf(1, "0 -- printf : [%*d]", -1, -123));
	// ft_printf("  %d\n", ft_printf("1 my printf : [%*d]", 10, -123));
	// dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%*d]", 10, -123));
	// ft_printf("  %d\n", ft_printf("2 my printf : [%.*d]", 10, -123));
	// dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%.*d]", 10, -123));
	// ft_printf("  %d\n", ft_printf("3 my printf : [%*d]", -10, -123));
	// dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%*d]", -10, -123));
	// ft_printf("  %d\n", ft_printf("4 my printf : [%*.*d]", 10, 2, -123));
	// dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%*.*d]", 10, 2, -123));
	// ft_printf("  %d\n", ft_printf("5 my printf : [%*.*d]", 10, 5, -123));
	// dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%*.*d]", 10, 5, -123));
	// ft_printf("  %d\n", ft_printf("6 my printf : [%*.*d]", -10, 5, -123));
	// dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%*.*d]", -10, 5, -123));
	// ft_printf("  %d\n", ft_printf("7 my printf : [%*.5d]", -10, -123));
	// dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%*.5d]", -10, -123));
	// ft_printf("  %d\n", ft_printf("8 my printf : [%*d]", 0, -123));
	// dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%*d]", 0, -123));
	// ft_printf("  %d\n", ft_printf("9 my printf : [%.*d]", 0, -123));
	// dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%.*d]", 0, -123));
	// ft_printf("  %d\n", ft_printf("10 my printf : [%.*d]", 0, -0));
	// dprintf(1, "  %d\n", dprintf(1, "10 -- printf : [%.*d]", 0, -0));
	// ft_printf("  %d\n", ft_printf("11 my printf : [%10.*d]", 0, -0));
	// dprintf(1, "  %d\n", dprintf(1, "11 -- printf : [%10.*d]", 0, -0));
	// ft_printf("  %d\n", ft_printf("12 my printf : [%10.d]", 1));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%10.d]", 1));
	// ft_printf("  %d\n", ft_printf("12 my printf : [%10.d]", 0));
	// dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%10.d]", 0));

	printf("----------------------------- i -----------------------------\n");

	ft_printf("  %d\n", ft_printf("1 my printf : [%-1.0i]", 0));
	dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%-1.0i]", 0));
	ft_printf("  %d\n", ft_printf("2 my printf : [%-2.0i]", 0));
	dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%-2.0i]", 0));
	ft_printf("  %d\n", ft_printf("3 my printf : [%-10.0i]", 0));
	dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%-10.0i]", 0));
	ft_printf("  %d\n", ft_printf("4 my printf : [%-3.0i]", -1));
	dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%-3.0i]", -1));
	ft_printf("  %d\n", ft_printf("5 my printf : [%-11.0i]", 2147483647));
	dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%-11.0i]", 2147483647));
	ft_printf("  %d\n", ft_printf("6 my printf : [%-3.0i]", 2));
	dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%-3.0i]", 2));
	ft_printf("  %d\n", ft_printf("7 -- printf : [%0*i]", 10, 42));
	dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%0*i]", 10, 42));
	ft_printf("  %d\n", ft_printf("8 -- printf : [%-*i]", 10, 42));
	dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%-*i]", 10, 42));
	ft_printf("  %d\n", ft_printf("9 my printf : [%*i]", 0, 0));
	dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%*i]", 0, 0));
	ft_printf("  %d\n", ft_printf("10 my printf : [%*i]", 10, 42));
	dprintf(1, "  %d\n", dprintf(1, "10 -- printf : [%*i]", 10, 42));	
	ft_printf("  %d\n", ft_printf("11 my printf : [%0*i]", -10, 42));
	dprintf(1, "  %d\n", dprintf(1, "11 -- printf : [%0*i]", -10, 42));
	ft_printf("  %d\n", ft_printf("12 my printf : [%*i]", 010, 42));
	dprintf(1, "  %d\n", dprintf(1, "12 -- printf : [%*i]", 010, 42));
	ft_printf("  %d\n", ft_printf("13 my printf : [%-*i]", -10, 42));
	dprintf(1, "  %d\n", dprintf(1, "13 -- printf : [%-*i]", -10, 42));
	ft_printf("  %d\n", ft_printf("13 my printf : [%-*i]", -10, -42));
	dprintf(1, "  %d\n", dprintf(1, "13 -- printf : [%-*i]", -10, -42));	
// 	[I - Tests with *]
// 960 - ("%*s", -10, "Hello") : FAILED
// 973 - ("%.*s", -3, "Hello") : FAILED
// 988 - ("%*.*s", 0, -5, "Hello") : FAILED

	printf("----------------------------- x -----------------------------\n");

	ft_printf("  %d\n", ft_printf("1 my printf : [%x]", 42));
	dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%x]", 42));
	ft_printf("  %d\n", ft_printf("2 my printf : [%10x]", 42));
	dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%10x]", 42));
	ft_printf("  %d\n", ft_printf("3 my printf : [%1x]", 42));
	dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%1x]", 42));
	ft_printf("  %d\n", ft_printf("4 my printf : [%2x]", 42));
	dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%2x]", 42));
	ft_printf("  %d\n", ft_printf("5 my printf : [%-10x]", 42));
	dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%-10x]", 42));
	ft_printf("  %d\n", ft_printf("6 my printf : [%.3x]", 100));
	dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%.3x]", 100));
	ft_printf("  %d\n", ft_printf("7 my printf : [%.10x]", 100));
	dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%.10x]", 100));
	ft_printf("  %d\n", ft_printf("8 my printf : [%5.3x]", 100));
	dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%5.3x]", 100));
	ft_printf("  %d\n", ft_printf("9 my printf : [%8.10x]", 100));
	dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%8.10x]", 100));
	
	ft_printf("  %d\n", ft_printf("1 my printf : [%x]", -42));
	dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%x]", -42));
	ft_printf("  %d\n", ft_printf("2 my printf : [%10x]", -42));
	dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%10x]", -42));
	ft_printf("  %d\n", ft_printf("3 my printf : [%1x]", -42));
	dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%1x]", -42));
	ft_printf("  %d\n", ft_printf("4 my printf : [%2x]", -42));
	dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%2x]", -42));
	ft_printf("  %d\n", ft_printf("5 my printf : [%-10x]", -42));
	dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%-10x]", -42));
	ft_printf("  %d\n", ft_printf("6 my printf : [%.3x]", -100));
	dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%.3x]", -100));
	ft_printf("  %d\n", ft_printf("7 my printf : [%.10x]", -100));
	dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%.10x]", -100));
	ft_printf("  %d\n", ft_printf("8 my printf : [%5.3x]", -100));
	dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%5.3x]", -100));
	ft_printf("  %d\n", ft_printf("9 my printf : [%8.10x]", -100));
	dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%8.10x]", -100));

	printf("----------------------------- x cap--------------------------\n");

	ft_printf("  %d\n", ft_printf("1 my printf : [%X]", 42));
	dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%X]", 42));
	ft_printf("  %d\n", ft_printf("2 my printf : [%10X]", 42));
	dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%10X]", 42));
	ft_printf("  %d\n", ft_printf("3 my printf : [%1X]", 42));
	dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%1X]", 42));
	ft_printf("  %d\n", ft_printf("4 my printf : [%2X]", 42));
	dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%2X]", 42));
	ft_printf("  %d\n", ft_printf("5 my printf : [%-10X]", 42));
	dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%-10X]", 42));
	ft_printf("  %d\n", ft_printf("6 my printf : [%.3X]", 100));
	dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%.3X]", 100));
	ft_printf("  %d\n", ft_printf("7 my printf : [%.10X]", 100));
	dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%.10X]", 100));
	ft_printf("  %d\n", ft_printf("8 my printf : [%5.3X]", 100));
	dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%5.3X]", 100));
	ft_printf("  %d\n", ft_printf("9 my printf : [%8.10X]", 100));
	dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%8.10X]", 100));
	
	ft_printf("  %d\n", ft_printf("1 my printf : [%X]", -42));
	dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%X]", -42));
	ft_printf("  %d\n", ft_printf("2 my printf : [%10X]", -42));
	dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%10X]", -42));
	ft_printf("  %d\n", ft_printf("3 my printf : [%1X]", -42));
	dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%1X]", -42));
	ft_printf("  %d\n", ft_printf("4 my printf : [%2X]", -42));
	dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%2X]", -42));
	ft_printf("  %d\n", ft_printf("5 my printf : [%-10X]", -42));
	dprintf(1, "  %d\n", dprintf(1, "5 -- printf : [%-10X]", -42));
	ft_printf("  %d\n", ft_printf("6 my printf : [%.3X]", -100));
	dprintf(1, "  %d\n", dprintf(1, "6 -- printf : [%.3X]", -100));
	ft_printf("  %d\n", ft_printf("7 my printf : [%.10X]", -100));
	dprintf(1, "  %d\n", dprintf(1, "7 -- printf : [%.10X]", -100));
	ft_printf("  %d\n", ft_printf("8 my printf : [%5.3X]", -100));
	dprintf(1, "  %d\n", dprintf(1, "8 -- printf : [%5.3X]", -100));
	ft_printf("  %d\n", ft_printf("9 my printf : [%8.10X]", -100));
	dprintf(1, "  %d\n", dprintf(1, "9 -- printf : [%8.10X]", -100));


	printf("----------------------------- u -----------------------------\n");

	printf("%d\n", printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	printf("%d\n", printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	printf("%d\n", printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	printf("%d\n", printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	printf("%d\n", printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	printf("%d\n", printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	printf("%d\n", printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	printf("---------------------------- my -----------------------------\n");
	ft_printf("%d\n", ft_printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	ft_printf("%d\n", ft_printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	ft_printf("%d\n", ft_printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));

	printf("----------------------------- p -----------------------------\n");

	ft_printf("return value : %d\n", ft_printf("0 my printf : [%p]", NULL));
	dprintf(1, "return value : %d\n", dprintf(1, "0 -- printf : [%p]", NULL));
	ft_printf("return value : %d\n", ft_printf("1 my printf : [%15p]", NULL));
	dprintf(1, "return value : %d\n", dprintf(1, "1 -- printf : [%15p]", NULL));
	ft_printf("return value : %d\n", ft_printf("2 my printf : [%-15p]", NULL));
	dprintf(1, "return value : %d\n", dprintf(1, "2 -- printf : [%-15p]", NULL));
	ft_printf("return value : %d\n", ft_printf("3 my printf : [%1p]", "Hello"));
	dprintf(1, "return value : %d\n", dprintf(1, "3 -- printf : [%1p]", "Hello"));
	ft_printf("return value : %d\n", ft_printf("4 my printf : [%10p]", "-42"));
	dprintf(1, "return value : %d\n", dprintf(1, "4 -- printf : [%10p]", "-42"));
	ft_printf("return value : %d\n", ft_printf("5 my printf : [%10p]", "-42"));
	dprintf(1, "return value : %d\n", dprintf(1, "5 -- printf : [%10p]", "-42"));
	ft_printf("return value : %d\n", ft_printf("6 my printf : [%1p]", "-100"));
	dprintf(1, "return value : %d\n", dprintf(1, "6 -- printf : [%1p]", "-100"));
	ft_printf("return value : %d\n", ft_printf("7 my printf : [%p]", NULL));
	dprintf(1, "return value : %d\n", dprintf(1, "7 -- printf : [%p]", NULL));
	ft_printf("return value : %d\n", ft_printf("8 my printf : [%20p]", "Hey"));
	dprintf(1, "return value : %d\n", dprintf(1, "8 -- printf : [%20p]", "Hey"));
	ft_printf("return value : %d\n", ft_printf("9 my printf : [%.p]", (void *)0));
	dprintf(1, "return value : %d\n", dprintf(1, "9 -- printf : [%.p]", (void *)0));
	
	printf("----------------------------- %% -----------------------------\n");

	// ft_printf("  %d\n", ft_printf("1 my printf : [%%]"));
	// dprintf(1, "  %d\n", dprintf(1, "1 -- printf : [%%]"));
	// ft_printf("  %d\n", ft_printf("2 my printf : [%10%]"));
	// dprintf(1, "  %d\n", dprintf(1, "2 -- printf : [%10%]"));	
	// ft_printf("  %d\n", ft_printf("3 my printf : [%-10%]"));
	// dprintf(1, "  %d\n", dprintf(1, "3 -- printf : [%-10%]"));
	// ft_printf("  %d\n", ft_printf("4 my printf : [%%%%%%%%%%%%%%%%%%%%%%%%%%]"));
	// dprintf(1, "  %d\n", dprintf(1, "4 -- printf : [%%%%%%%%%%%%%%%%%%%%%%%%%%]"));
	printf("---------------------------- mix ----------------------------\n");
	
	// ft_printf("  %d\n", ft_printf("31 my printf : [%.20s]%10s%-5s", "hello", "bonjour", "hi"));
	// dprintf(1, "  %d\n", dprintf(1,"31 -- printf : [%.20s]%10s%-5s", "hello", "bonjour", "hi"));
	// ft_printf("  %d\n", ft_printf("32 my printf : [%.10s]%10c%-4c", "hello", 'c', 'A'));
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
