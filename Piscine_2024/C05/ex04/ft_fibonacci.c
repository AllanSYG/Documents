/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:19 by asayag            #+#    #+#             */
/*   Updated: 2025/02/17 12:45:10 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
/*
int	main(int ac, char **av)
{
	ac = 0;
	printf("%i", ft_fibonacci(atoi(av[1])));
}*/
