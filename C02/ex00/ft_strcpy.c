/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:13:06 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/21 12:23:21 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void) 
{
	char src[] = "Sample string to copy.";
	char dest[100];

	ft_strcpy (dest, src);
	printf ("Original string (src): %s\n", src);
	printf ("Copied string (dest): %s\n", dest);
	return 0;
}
*/
