#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[18] = "destination";
	char src[] = "unkown";
	char *res;

	res = ft_strncat(dest, src, 3);
	printf("%s\n%s\n%s", dest, src, res);
	return (0);
}
