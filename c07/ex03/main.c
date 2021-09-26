#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char **rr;
	int size = 4;
	char sep[] = "YO!";
	
	rr = malloc(sizeof(char*) * 4);

	rr[0] = "ciao";
	rr[1] = "come";
	rr[2] = "state";
	rr[3] = "tutti";

	printf("%s", ft_strjoin(size, rr, sep));
	return (0);
}
