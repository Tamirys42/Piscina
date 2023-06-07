#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *scr);

int main (void)
{
	char source[] = "Tamirys";
	char destiny[] ="Kim";

	ft_strcpy(destiny, source);
	
	printf ("Destiny depois da cópia: %s\n", destiny);

	return (0);
}

char *ft_strcpy (char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i]='\0';

	return (dest);
}
