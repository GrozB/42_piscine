/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:12:00 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/02 14:44:14 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
int main(void)
{
    int number = 5;
    int factorial = ft_iterative_factorial(number);

    printf("The factorial of %d is %d\n", number, factorial);

    return 0;
}
*/
