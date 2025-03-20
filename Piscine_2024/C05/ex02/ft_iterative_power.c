/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:08:56 by asayag            #+#    #+#             */
/*   Updated: 2025/02/20 11:11:15 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	signe;
	int	n;

	n = nb;
	i = 1;
	signe = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb * signe);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_power(-3, 3));
}*/
