/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphabetical.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgroz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:20:42 by bgroz             #+#    #+#             */
/*   Updated: 2024/03/01 10:33:39 by bgroz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return 1 if only contains alphabetical, 0 if contains anyting else
#include <unistd.h>
#include <stdio.h>

int alphabetic(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
		else if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		else
			i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
    // Ensure there is at least one command-line argument
    if (argc < 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1; // Exit with a non-zero status to indicate an error
    }

    // Use the corrected alphabetic function to check the first argument
    if (alphabetic(argv[1]))
    {
        printf("The string '%s' is alphabetic.\n", argv[1]);
    }
    else
    {
        printf("The string '%s' is not alphabetic.\n", argv[1]);
    }

    return 0; // Exit successfully
}
