#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
    unsigned int i;
    int **p_arr;
	int *arr;
	int res;
    int max = 2147483647;
    int min = -2147483648;
    
	p_arr = &arr;
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%u\n", (unsigned int)(max - min));
    res = ft_ultimate_range(p_arr, min, max);
    i = 0;
    while (i < (unsigned int)(max - min))
    {
		if (arr[i] == min || arr[i] == max - 1)
        printf("%d\n", arr[i]);
        i++;
    }
    return (0);
}
