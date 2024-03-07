/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:39:01 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/19 09:19:06 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;

	index = 0;
	c = 0;
	while (index < size / 2)
	{
		c = tab[index];
		tab[index] = tab[size -1 - index];
		tab[size -1 - index] = c;
		index++;
	}
}
