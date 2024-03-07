/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:35:32 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/07 13:11:36 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
				{
					write(1, &argv[3][0], 1);
				}
				else
				{
					write(1, &argv[1][i], 1);
				}
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}