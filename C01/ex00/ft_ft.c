/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:23:17 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 10:52:59 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int nbr)
{
	int	n;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	n = nbr % 10 + '0';
	write(1, &n, 1);
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	nbr;

	nbr = 0;
	ft_ft(&nbr);
	ft_putnbr(nbr);
	return (0);
}*/
