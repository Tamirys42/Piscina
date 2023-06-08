/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluamar- <tluamar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 22:47:20 by tluamar-          #+#    #+#             */
/*   Updated: 2023/06/07 22:50:17 by tluamar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int		resultado;
	char	string[];

	string[] = "ABCZ";
	resultado = ft_str_is_lowercase(string);
	printf("%d\n", resultado);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (FALSE);
	}
	return (TRUE);
}
