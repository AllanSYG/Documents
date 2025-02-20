/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:35:01 by asayag            #+#    #+#             */
/*   Updated: 2025/02/13 13:59:10 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_iterative_factorial(int nb)
{
	int	r;
	int	i;

	i = 1;
	r = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb - i >= 0)
	{
		r = r * i;
		i++;
	}
	return (r);
}

/*int	main(int ac, char **av)
{
	ac = 0;
	printf("%d",ft_iterative_factorial(atoi(av[1])));
}*/
