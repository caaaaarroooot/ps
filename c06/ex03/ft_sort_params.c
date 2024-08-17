#include <stdio.h>
#include <unistd.h>

void ft_print_param(int argc, char *argv[])
{
	int i = 1;
        int j = 0;
        while (i < argc)
        {
                while (argv[i][j])
                {
                        write (1, &argv[i][j], 1);
                        j++;
                }
                i++;
                j = 0;
                write (1, "\n", 1);
        }
}

int main(int argc, char* argv[])
{
	char *temp;
	int i = 0;
	int j;

	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (argv[i][0] > argv[j][0])
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}	
			j++;
		}
		i++;
	}
	ft_print_param(argc, argv);	
	return 0;
}
