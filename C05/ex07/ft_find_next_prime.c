/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:32:06 by asayag            #+#    #+#             */
/*   Updated: 2025/02/18 11:33:47 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*int	main(int ac, char **av)
{
	ac = 0;
	printf("%i", ft_find_next_prime(atoi(av[1])));
}*/
