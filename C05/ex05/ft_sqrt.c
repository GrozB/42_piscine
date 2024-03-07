/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:42:17 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/03 10:41:37 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= 46340)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		else if ((i * i) > nb)
		{
			return (0);
		}
		i++;
	}
	return (0);
}
/*
int main(int argc, char *argv[]) 
{
	if (argc == 2)
		printf("%d\n", ft_sqrt(atoi(argv[1])));
	return 0;
}
*/
