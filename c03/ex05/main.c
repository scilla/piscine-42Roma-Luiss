#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat2(char *dest, char *src, unsigned int size);

int main()
{
	char src[] = "YMLCI";
	char dest[100] = "rKlfF";
	char dest2[100] = "rKlfF";
	unsigned int res;

	res = ft_strlcat(dest, src, 3);
	printf("%d\n%s\n", res, dest);
	res = ft_strlcat2(dest2, src, 3);
	printf("%d\n%s\n", res, dest2);


	return (0);
}
