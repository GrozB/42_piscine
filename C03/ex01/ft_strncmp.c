/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:19:10 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/27 14:42:53 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n && s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "Beratt";
	char	str2[] = "Berat";
	unsigned int	n =6;

	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
}
