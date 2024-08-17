#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i = 0;
        if((*range = (int *)malloc(sizeof(int) * max - min)) == NULL)
	{
		return -1;
	}
	if (min >= max)
	{
		range[0] = '\0';
		return 0;
	}
	size = max - min;
        while (max - min > 0)
        {
                (*range)[i] = min;
                min++;
		i++;
        }
	return size;
}

int main()
{
        int a=0, b=10;
	int *range;
        int i = 0;
	int c = ft_ultimate_range(&range, a, b);
        printf ("%d\n", c);
	i = 0;
	while (i < c)
	{
		printf("%d", range[i]);
		i++;
	}
	
	c = ft_ultimate_range(&range, -5, 20);
	printf("\n");
        i = 0;
        while (i < c)
        {
                printf("%d", range[i]);
                i++;
        }
        printf ("%d\n", c);
        return 0;
}
