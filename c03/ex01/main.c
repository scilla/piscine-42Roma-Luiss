#include <stdio.h>
#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("%d\n", ft_strncmp("miao scema", "niao amore", 1));
	return (0);
}
