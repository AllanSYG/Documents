/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:04:22 by asayag            #+#    #+#             */
/*   Updated: 2025/02/08 18:01:44 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_table(char *input);

void	ft_1(char **argv)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	char	*input

	input = malloc(16 * sizeof(char));
	while (i <= 31)
	{
		input[n] = argv[1][i];
		i = i + 2;
		n++;
	}
	ft_table(input);
}
