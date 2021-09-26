#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char src[20] = "dopo";
	char dest[20] = "prima";
	ft_strcat(dest, src);
	printf("%s\n%s", dest, src);
	return (0);
}
