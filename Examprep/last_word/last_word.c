/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:26:56 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/29 12:17:55 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i >= 0 && argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		start = i;
		while (start >= 0 && argv[1][start] != ' ' && argv[1][start] != '\t')
			start--;
		start++;
		while (argv[1][start] != '\0' && start <= i)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
