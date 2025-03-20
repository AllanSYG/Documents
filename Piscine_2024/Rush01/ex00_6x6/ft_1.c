/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:04:22 by asayag            #+#    #+#             */
/*   Updated: 2025/02/09 05:56:54 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_putnbr(int c);

void	ft_table0(int	*input);

int	*ft_1(char *argv)
{
	int	i;
	int	n;
	int	*input;

	n = 0;
	i = 0;
	input = malloc(36 * sizeof(int));
	while (i < 47)
	{
		input[n] = atoi(&argv[i]);
		i = i + 2;
		n++;
	}
	return (input);
}
