/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:49:36 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/27 08:41:13 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i + 1 < size)
	{
		i++;
	}
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	return (i);
}
/*
int	main(void)
{
	char buffer[20];
	int result;
    // Test 1: Enough space for full append
    buffer[0] = '\0'; // Start with an empty string
    result = ft_strlcat(buffer, "Hello", 20);
	printf("%d\n", result);
    result = ft_strlcat(buffer, ", world!", 20);
	printf("%d\n", result);
    printf("Test 1: %s\n", buffer);

    // Test 2: Just enough space for part of the source string
    buffer[0] = '\0'; // Reset buffer to empty
    ft_strlcat(buffer, "Hello", 5);
    ft_strlcat(buffer, ", world!", 5); // Only a portion can be appended
    printf("Test 2: %s\n", buffer);
}
*/
