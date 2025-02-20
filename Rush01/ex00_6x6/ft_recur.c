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
int	ft_check_all(int input[24], int pos, int result[6][6]);

int	check_same(int pos, int result[6][6], char size);

int	ft_recur(int input[24], int pos, int result[6][6])
{
	int	size;

	size = 1;
	if (pos == 24)
		return (1);
	while (size <= 6)
	{
		if (check_same(pos, result, size) == 0)
		{
			result[pos / 6][pos % 6] = size;
			if (ft_check_all(input, pos, result) == 0)
			{
				if (ft_recur(input, pos + 1, result) == 1)
					return (1);
			}
			else
				result[pos / 6][pos % 6] = 0;
		}
		size++;
	}
	return (0);
}
