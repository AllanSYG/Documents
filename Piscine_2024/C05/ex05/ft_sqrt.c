/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:13:57 by asayag            #+#    #+#             */
/*   Updated: 2025/02/18 11:19:26 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 0;
	while (guess <= nb)
	{
		if (nb == guess * guess)
			return (guess);
		guess++;
	}
	return (0);
}

/*int	main(int ac, char **av)
{
	ac = 0;
	printf("%i", ft_sqrt(atoi(av[1])));
}*/
