/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:03:19 by pealexan          #+#    #+#             */
/*   Updated: 2023/01/11 11:15:05 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;

	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main(void)
{
	char	s1[] = "coiso";
	char	s2[] = "123";

	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}*/
