
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int				sign;
	int				nbr;

	sign = 1;
	nbr = 0;
	while (*str && *str == ' ')
		str++;
	if (*str)
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else if (*str == '+')
			str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - 48;
		str++;
	}
	return (nbr * sign);
}

int	main(int argc, char **argv)
{
	/* ft_atoi()*/
	
	if(argc > 1) {
		printf("Salida atoi(\"%s\"): %d\n", argv[1], atoi(argv[1]));
		printf("Salida ft_atoi(\"%s\"): %d\n", argv[1], ft_atoi(argv[1]));
	}

		printf("Salida atoi(): %d\n", atoi("       "));
		printf("Salida ft_atoi(): %d\n", ft_atoi("          "));
}
