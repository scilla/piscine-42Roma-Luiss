#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	printf("%d", ft_strcmp("ciao", "ciaff"));
	return (0);
}
