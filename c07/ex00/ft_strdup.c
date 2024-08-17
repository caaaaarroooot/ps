#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char *src)
{
	int i = 0;
	while (src[i])
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	char *result;
	int s_len = ft_strlen(src);
	int i = 0;
	result = (char *)malloc(sizeof(char) * s_len);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return result;
}

int main(){
	char *src = "i have to sleep";
	char *result;
	result = ft_strdup(src);
	printf("%s\n", result);
	free(result);
}
