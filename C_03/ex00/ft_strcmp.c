#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

int ft_strcmp (char *s1, char *s2);

int main (void)
{
	char str1[] = "Hello my beautiful world";
	char str2[] = "Hello World";

	//printf ("%d\n", ft_strcmp(str1, str2));
	//printf ("OFICIAL: %d\n", strcmp(str1, str2));

	return 0;
}

int ft_strcmp (char *s1, char *s2)
{
	while (*s1 == *s2 && *s1) //&& *s1 é o mesmo que && *s1 != '\0'//
		{
			s1++;
			s2++;
		}
	return (*s1-*s2);
}
