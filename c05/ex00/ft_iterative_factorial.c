#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int num = 1;
	
	if(nb == 0)
		return 1;
	else if (nb < 0)
		return 0;
	while (nb > 0)
		num *= nb--;
	return num;
}

int main(){
	printf("%d", ft_iterative_factorial(5));
}
