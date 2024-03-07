/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:19:54 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/07 17:29:49 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	int	dup;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc(sizeof(char) + (len + 1));
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
