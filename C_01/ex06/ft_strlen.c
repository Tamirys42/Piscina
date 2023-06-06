#include <unistd.h>
//#include <stdio.h>
#define TAM 30

int ft_strlen (char *str);

int main (void)
{
	char string [TAM] = "Hello World";
	int resp; 

	resp = ft_strlen (string);

	//printf ("%d\n", resp);

	return (0);
}

int ft_strlen (char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i + 1;
}
