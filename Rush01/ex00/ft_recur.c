/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 05:26:54 by ilaamari          #+#    #+#             */
/*   Updated: 2025/02/09 05:52:19 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check_all(int input[16], int pos, int result[4][4]);

int	check_same(int pos, int result[4][4], char size);

int	ft_recur(int input[16], int pos, int result[4][4])
{
	int	size;

	size = 1;
	if (pos == 16)
		return (1);
	while (size <= 4)
	{
		if (check_same(pos, result, size) == 0)
		{
			result[pos / 4][pos % 4] = size;
			if (ft_check_all(input, pos, result) == 0)
			{
				if (ft_recur(input, pos + 1, result) == 1)
					return (1);
			}
			else
				result[pos / 4][pos % 4] = 0;
		}
		size++;
	}
	return (0);
}
