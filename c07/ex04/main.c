#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
	char nbr[] = "-bcd";
	char base_from[] = "abcdefghij";
	char base_to[] = "0123456789";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
