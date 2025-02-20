/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:20:23 by asayag            #+#    #+#             */
/*   Updated: 2025/02/18 11:29:22 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	guess;
	int	n;

	n = 1;
	guess = 0;
	while (n <= nb)
	{
		if (nb % n == 0)
			guess++;
		n++;
	}
	if (guess == 2)
		return (1);
	else
		return (0);
}
/*
int	main(int ac, char **av)
{
	ac = 0;
	printf("%i", ft_is_prime(atoi(av[1])));
}*/
