/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:00:27 by pealexan          #+#    #+#             */
/*   Updated: 2023/01/11 14:17:39 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 4)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else if (argv[2][1] || argv[3][1])
			{
				write(1, "\n", 1);
				exit (0); 
			}
			else 
				write(1, &argv[1][i], 1); 
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
