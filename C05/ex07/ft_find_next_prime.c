/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:54:28 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/03 18:08:56 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
/*
int main(int argc, char *argv[])
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	if (argc == 2) 
	{
		while (argv[1][i] != '\0') 
		{
			nb = nb * 10 + (argv[1][i] - '0');
			i++;
		}
		printf("%d\n", ft_find_next_prime(nb));
	}
	return (0);
}
*/
