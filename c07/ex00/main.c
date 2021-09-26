#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src);

int main()
{
    char orig[] = "";
    printf("%s", ft_strdup(orig));
    return (0);
}
