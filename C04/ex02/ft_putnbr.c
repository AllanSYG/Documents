/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:26:22 by asayag            #+#    #+#             */
/*   Updated: 2025/02/18 12:23:54 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nbr * -1);
	}
	else if (nbr >= 0)
	{
		if (nbr > 9)
			ft_putnbr(nbr / 10);
		nbr = nbr % 10 + '0';
		write(1, &nbr, 1);
	}
}
/*
int	main(int ac, char **av)
{
	ac = 0;
	ft_putnbr(atoi(av[1]));
}*/
