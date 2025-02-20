/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:47:16 by asayag            #+#    #+#             */
/*   Updated: 2025/02/17 12:07:56 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	c;

	c = nb;
	if (nb == 0)
		return (nb + 1);
	else if (nb < 0)
		return (0);
	else
		return (c * ft_recursive_factorial(nb - 1));
}
/*int	main(int ac, char **av)
{
	ac = 0;
	av = 0;
	printf("%d", ft_recursive_factorial(5));
	return (0);
}*/
