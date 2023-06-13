#include <stdio.h>

int ft_strlen(char *str) 
{
    int cont = 0;
    while (*str != '\0') {
        cont++;
        str++;
    }
    return cont;
}

int main(void) 
{
    char str[] = "Hello, World!";
    int charCount = ft_strlen(str);
    printf("Número de caracteres: %d\n", charCount);
    return 0;
}

