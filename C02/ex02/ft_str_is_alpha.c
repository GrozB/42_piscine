/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:05:36 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/21 12:52:22 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' && str[i] > 'Z') || (str[i] > 'z' || str[i] < 'A'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(int	argc, char	**argv)
{
	int	i;
	
	i = 1;
	while (i < argc)
	{
		printf("%d", ft_str_is_alpha(argv[i]));
		i++;
	}
}
*/
