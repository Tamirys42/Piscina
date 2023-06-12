#include <unistd.h>
#include <stdio.h>
# define N 6
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
        char str1[] = "Hello";
        char str2[] = "Helloish";
        printf ("%d\n", ft_strncmp (str1, str2, N));
        return (0);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
        while (*s1 == *s2 && --n && *s1) // esse while começa no máximo de N -1, porque o array conta com zero. E, para caso as strings sejam iguais, precisa de um double check, pois se ambas são iguais, ambas chegarão no caracter nulo - não desejo isso - para sair do while. Por isso, também confere se *s1 == TRUE.
        {
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}

