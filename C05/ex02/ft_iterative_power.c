/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:45:50 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/02 15:15:49 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int main(void)
{
    int base = 5;
    int exponent = 3;
    int result = ft_iterative_power(base, exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}
*/
