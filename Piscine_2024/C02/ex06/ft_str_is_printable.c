/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:23:24 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 14:23:25 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] < 127 && str[i] > 32)
				result = 1;
			else
				return (0);
			i++;
		}
	}
	else
		return (1);
	return (result);
}

/*int	main(int ac, char **av)
{
	ac = 0;
	printf("%i", ft_str_is_printable(av[1]));
}*/
