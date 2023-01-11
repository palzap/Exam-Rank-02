/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:03:44 by pealexan          #+#    #+#             */
/*   Updated: 2023/01/11 12:09:13 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
//	int	j = 0;

	if (argc == 2)
	while (argv[1][i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &argv[1][i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
