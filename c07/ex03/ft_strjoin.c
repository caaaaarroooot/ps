#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str) {
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char *ft_strjoin(int size, char **strs, char *sep) {
    char *str;
    int i = 0;
    int j;
    int cnt = 0;
    int total_len = 0;

    if (size == 0) {
        str = (char *)malloc(1);  
        if (str) 
            str[0] = '\0';
        return str;
    }
    while (i < size)
        total_len += ft_strlen(strs[i++]);
    total_len += ft_strlen(sep) * (size - 1);
    str = (char *)malloc(sizeof(char) * (total_len + 1));
    if (!str)
        return NULL;
    i = 0;
    cnt = 0;
    while (i < size) {
        j = 0;
        while (strs[i][j])
            str[cnt++] = strs[i][j++];
        
        if (i < size - 1) {
            j = 0;
            while (sep[j])
                str[cnt++] = sep[j++];
        }
        i++;
    }

    str[cnt] = '\0';
    return str;
}

int main() {
    char *strs[] = {"Hello", "world", "!"};
    char *sep = ", ";
    char *result = ft_strjoin(3, strs, sep);

    if (result) {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}

