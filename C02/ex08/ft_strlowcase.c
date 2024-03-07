/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:13:27 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/21 12:58:16 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] +32);
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char    testStr[] = "Hello, World! This Is A Test string.";

    printf ("Original string: %s\n", testStr);
    ft_strlowcase(testStr);
    printf ("Capitalized string: %s\n", testStr);
    return (0);
}
*/
