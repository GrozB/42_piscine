/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftaslimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:36:21 by ftaslimi          #+#    #+#             */
/*   Updated: 2024/02/25 18:50:49 by ftaslimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solve(int tab[4][4], int input[16], int pos);
int		check(int ac, char **av);
int		*str_to_arr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

void	put_skyscraper(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_grid(int tab[4][4])
{
	put_skyscraper(tab);
}

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	*input;

	if (check(ac, av) == 1)
		return (0);
	input = str_to_arr(av[1]);
	if (solve(tab, input, 0) == 1)
		print_grid(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
