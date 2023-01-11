/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:23:24 by pealexan          #+#    #+#             */
/*   Updated: 2023/01/11 11:36:22 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a = 1;
	int	b = 3;

	printf("a - %i\n", a);
	printf("b - %i\n", b);
	ft_swap(&a, &b);
	printf("a - %i\n", a);
	printf("b - %i\n", b);
}*/
