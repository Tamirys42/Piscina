#include <unistd.h>
#include <stdio.h>
#define TAM 30

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
	char destino [TAM];
	char source [] = "Tamirys";

	int tamanho;

	tamanho = sizeof (source) / sizeof(source[0]);

	ft_strncpy(destino, source, tamanho);

	printf ("Destino: %s", destino);

	return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t i;
	i = 0;

	while (i < n && src[i] != '0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
//a estrututa da função foi retirada do man strcnpy
