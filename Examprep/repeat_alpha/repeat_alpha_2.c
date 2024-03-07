/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:17:33 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/07 13:29:41 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alphabet(char c)
{
	int	repeat;

	if (c >= 'a' && c <= 'z')
	{
		repeat = c - 'a' + 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	repeat;
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			repeat = is_alphabet(argv[1][i]);	
			while (repeat != 0)
			{
				write(1, &argv[1][i], 1);
				repeat --;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
