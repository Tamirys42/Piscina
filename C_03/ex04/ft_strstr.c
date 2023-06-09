#include <stdio.h>

char *ft_strstr (char *str, char *to_find);

int main (void)
{
	char haystack[] = "Do or do not. There is no try";
	char needle[] = "is";
	printf ("%s\n", ft_strstr(haystack, needle));
	return 0;
}

char *ft_strstr (char *str, char *to_find)
{
	int i;
	int j;

	i=0;
	j=0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i+j] != '\0' && str[i+j] == to_find[j])
		{
			if (to_find[j+1] == '\0')
					return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
