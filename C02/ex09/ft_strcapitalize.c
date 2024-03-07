/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:34:32 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/24 15:22:12 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	ft_type(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return ('l');
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return ('u');
	}
	else if (c >= '0' && c <= '9')
	{
		return ('n');
	}
	else
	{
		return ('r');
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	if (ft_type(str[i]) == 'l')
	{
		str[i] = str[i] -32;
	}
	i = 1;
	while (str[i])
	{
		if (ft_type(str[i - 1]) == 'r' && ft_type(str[i]) == 'l')
		{
			str[i] = str[i] -32;
		}
		else if (ft_type(str[i - 1]) != 'r' && ft_type(str[i]) == 'u')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	testString[] = "salut, comment tu vas ? 42mots quarante-deux";

	printf("Original: %s\n", testString);
	ft_strcapitalize(testString);
	printf("Capitalized: %s\n", testString);
	return 0;
}
*/
