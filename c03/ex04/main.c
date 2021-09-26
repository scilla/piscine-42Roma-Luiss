#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "stringad testo";
	char nee[] = "gadhygj";
	char *res;
	
	res = ft_strstr(str, nee);
	printf("%s", res);
	return (0);
}
