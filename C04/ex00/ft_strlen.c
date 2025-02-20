/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:39:48 by asayag            #+#    #+#             */
/*   Updated: 2025/02/13 12:29:28 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = n + 1;
		i++;
	}
	return (n);
}

/*int	main(int argc, char **argv)
{
	argc = 0;
	char *str = argv[1];
	printf("%i", ft_strlen(str));
}*/
