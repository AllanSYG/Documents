/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:03:33 by asayag            #+#    #+#             */
/*   Updated: 2025/02/09 05:56:52 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_same(int pos, int result[4][4], int size)
{
	int	i;

	i = 0;
	while (i < pos % 4)
	{
		if (result[pos / 4][i] == size)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos / 4)
	{
		if (result[i][pos % 4] == size)
			return (1);
		i++;
	}
	return (0);
}
