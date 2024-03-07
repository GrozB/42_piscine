/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:42:50 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/29 20:52:14 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	j--;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	ft_strrev(argv[1]);
	printf("%s\n", argv[1]);
}
