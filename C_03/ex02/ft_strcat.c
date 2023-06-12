#include <stdio.h>
/*The  strcat()  function appends the src string to the dest string, over‐
       writing the terminating null byte ('\0') at the end of  dest,  and  then
       adds a terminating null byte.*/

char *ft_strcat (char *dest, char *src);

int main (void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	printf ("%s\n", ft_strcat (str1, str2));
	return 0;
}

char *ft_strcat (char *dest, char *src)
{
	int i;
	int j;

	i=0;
	j=0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i+j] = src[j];
		j++;
	}
	dest[i+j] = '\0';
	return (dest);
}
