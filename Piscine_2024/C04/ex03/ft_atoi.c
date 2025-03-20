/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:31:44 by asayag            #+#    #+#             */
/*   Updated: 2025/02/17 13:00:59 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	value(char *str, int i)
{
	if (str[i] == '0')
		return (0);
	if (str[i] == '1')
		return (1);
	if (str[i] == '2')
		return (2);
	if (str[i] == '3')
		return (3);
	if (str[i] == '4')
		return (4);
	if (str[i] == '5')
		return (5);
	if (str[i] == '6')
		return (6);
	if (str[i] == '7')
		return (7);
	if (str[i] == '8')
		return (8);
	if (str[i] == '9')
		return (9);
	return (0);
}

int	ft_atoi(char *str)
{
	int	signe;
	int	nb;
	int	i;

	i = 0;
	signe = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + value(str, i);
		i++;
	}
	return (nb * signe);
}

/*int	main(int ac, char **av)
{
	ac = 0;
	printf("%i", ft_atoi(av[1]));
}*/
