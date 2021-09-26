#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
    unsigned int i;
    int *arr;
    int max = 2147483647;
    int min = -2147483648;
    
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%u\n", (unsigned int)(max - min));
    arr = ft_range(min, max);
    i = 0;
    while (i < (unsigned int)(max - min))
    {
		if (!(i % 10000000))
        printf("%d\n", arr[i]);
        i++;
    }
    return (0);
}
