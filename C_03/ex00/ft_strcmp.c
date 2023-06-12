#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp (char *s1, char *s2);

int main (void)
{
	char str1[] = "Helloish";
	char str2[] = "Hello";

	printf ("%d\n", ft_strcmp(str1, str2));
	printf ("OFICIAL: %d\n", strcmp(str1, str2));

	return 0;
}

int ft_strcmp (char *s1, char *s2)
{
	while (*s1 == *s2 && *s1) //&& *s1 é o mesmo que && *s1 != '\0'//
				  //conferir se *s1 == TRUE é necessário porque se ambas strings forem iguais ao chegar no caracter NULL ele será igual, então o while será TRUE e rodará mais uma vez. Para isso não acontecer, conferimos também se pelo menos uma das strings é TRUE. Por isso && *s1
		{
			s1++;
			s2++;
		}
	return (*s1-*s2); // o resultado é igual a subtração dos valores na tabela ASCII
}
