#include <stdio.h>

int ft_atoi(char *str);

int main()
{
	char str[] = " \t \f\n\r\v---2147483648";
	printf("%d", ft_atoi(str));
	return (0);
}

