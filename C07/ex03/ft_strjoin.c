/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:42:26 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/06 12:19:06 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*allocation(int size, char **strs, char *sep, int totlen)
{
	int		i;
	int		seplen;
	char	*res;

	i = 0;
	seplen = ft_strlen(sep);
	res = (char *)malloc(totlen + 1 + (seplen * (size - 1)));
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totlen;
	char	*res;

	i = 0;
	totlen = 0;
	if (size == 0)
	{
		res = (char *)malloc(1);
		if (res != NULL)
			res[0] = '\0';
		return (res);
	}
	while (i < size)
	{
		totlen += ft_strlen(strs[i]);
		if (i < size - 1)
			totlen += ft_strlen(sep);
		i++;
	}
	res = allocation(size, strs, sep, totlen);
	return (res);
}
/*
int	main(void)
{
	char	sep[] = " ";
	char	*strs[] = {"Hello", "This", "Is", "A", "Test"};
	char	*res;
	int		size;
	
	size = 5;
	res = ft_strjoin(size, strs, sep);
	printf("%s", res);
	return (0);
}
*/
