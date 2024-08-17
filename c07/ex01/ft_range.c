#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *array;
	int i = 0;
	array = (int *)malloc(sizeof(int) * (max - min));
	while (max - min > 0)
	{
		printf("min: %d, array[%d]\n", min, i);
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

int main()
{
	int a=5, b=10;
	int *array = ft_range(a, b);
	int i = 0;	
	while (i < b-a)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	
	return 0;
}
