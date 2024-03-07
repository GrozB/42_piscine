/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:35:57 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/06 19:02:04 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;
	unsigned int	store;

	i = 2;
	store = 0;
	if (n == 1)
		return (1);
	if (n <= 3)
		return (0);
	while(i * i < 4294967295)
	{
		store = i * i;
		if (store == n)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	unsigned int	n;

	n = 5;
	is_power_of_2(n);
	printf("%d", n);
}
