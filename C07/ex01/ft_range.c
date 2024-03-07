/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:56:20 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/05 17:47:09 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == 0)
		return (0);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int main(void) 
{
    int min = 5;
    int max = 10;
	int *range = ft_range(min, max);
	int	j;

	j = 0;
	if (range != 0)
	{
		while ((max - min) > j)
		{		
			printf("%d", range[j]);
			j++;
		}
		free(range);
	}
	return (0);
}
*/
