#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int i = 0;
	
	argc = 0;
	while (argv[argc][i])
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
