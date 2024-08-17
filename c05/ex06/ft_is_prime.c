#include <stdio.h>


int ft_sqrt(int nb)
{
        int     s;
        int     t;

        t = 0;
        s = nb / 2;

        while (s != t)
        {
                t = s;
                s = (t + nb / t) / 2;
        }
	//printf("%d's sqrt: %d\n", nb, s);        
        return s;
}

int ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return 0;
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		printf("nb: %d, i: %d\n", nb, i);
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main (){
	printf("2: %d\n", ft_is_prime(2));
	printf("0: %d\n", ft_is_prime(0));
	printf("97: %d\n", ft_is_prime(97));
	printf("6: %d\n", ft_is_prime(6));
	printf("-123%d\n", ft_is_prime(-123));
	return 0;
}
