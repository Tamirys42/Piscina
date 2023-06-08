/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluamar- <tluamar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 22:38:22 by tluamar-          #+#    #+#             */
/*   Updated: 2023/06/07 22:44:54 by tluamar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#define TRUE 1
#define FALSE 0

int		ft_str_is_lowercase(char *str);

/*int main (void)
{
int		resultado;
	int	i;

char	string[] = "abcdZ";
resultado= ft_str_is_lowercase (string);
printf ("%d\n", resultado);
return (0);
}*/
int	ft_str_is_lowercase(char *str)
{
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (FALSE);
	}
	return (TRUE);
}
