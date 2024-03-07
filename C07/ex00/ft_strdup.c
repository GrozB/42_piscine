/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:36:12 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/05 12:35:55 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == 0)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main(void)
{
    char    *str;
    char    *new_str;

    str = "Berrrrrat";
    new_str = ft_strdup(str);
    printf("%s\n", new_str);
}
*/
