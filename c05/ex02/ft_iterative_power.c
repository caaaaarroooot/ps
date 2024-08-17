#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int num = 1;
	if(power < 0)
		return 0;
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return num;
}
int main(){
	printf("%d\n", ft_iterative_power(10, 3));
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(10, -2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-10, 3));
}
