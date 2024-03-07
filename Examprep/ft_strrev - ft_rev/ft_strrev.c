/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:26:52 by bgroz             #+#    #+#             */
/*   Updated: 2024/02/29 20:41:43 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
			index++;
	}
	index = index -1;
	i = 0;
	while (i < str[index + 1] / 2)
	{
		c = str[i];
		str[i] = str[index -i];
		str[index -i] = c;
		i++;
	}
	return (str);
}
