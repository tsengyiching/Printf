nt		ft_atoi(const char *str)
{
	long int	sign;
	long int	res;
	long int	size;

	sign = 1;
	res = 0;
	size = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		size++;
		str++;
	}
	if (size > 18)
		return (sign == -1 ? 0 : -1);
	return (res * sign);
}
