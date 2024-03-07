/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:39:09 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/02 20:41:56 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
int main(void)
{
    int index = 9; // Example index
    int fibonacci_number = ft_fibonacci(index);

    printf("Fibonacci number at index %d is %d\n", index, fibonacci_number);

    return 0;
}
*/
