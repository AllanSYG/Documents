/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:04:58 by asayag            #+#    #+#             */
/*   Updated: 2025/02/09 05:56:56 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	result1(int result[4][4]);

int		ft_recur(int input[16], int pos, int result[4][4]);

void	ft_table0(int input[16])
{
	int		result[4][4];

	if (ft_recur(input, 0, result) == 1)
		result1(result);
	else
		write(1, "No solution found \n", 19);
}
