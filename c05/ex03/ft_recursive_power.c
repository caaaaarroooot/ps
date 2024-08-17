#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return 0;
	else if(power == 0)
		return 1;
	return nb * ft_recursive_power(nb, --power);
}

int main(){
	printf("%d\n", ft_recursive_power(10,3));
	printf("%d\n", ft_recursive_power(10,0));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(10,-3));
	return 0;
}
