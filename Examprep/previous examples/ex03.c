/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:16:33 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/23 10:39:02 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strrev(char	*str)
{
	char	temp;
	int	start;
	int	end;
	
	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return(str);
}

int	main(int argc, char	**argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n", ft_strrev(argv[i]));
		i++;
	}
	return (0);
}
