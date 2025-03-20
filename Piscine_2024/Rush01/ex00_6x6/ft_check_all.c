/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 04:26:08 by asayag            #+#    #+#             */
/*   Updated: 2025/02/09 05:56:53 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_col_up(int input[36], int pos, int result[6][6])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 0;
	max = 0;
	if (pos / 6 == 5)
	{
		while (i < 6)
		{
			if (result[i][pos % 6] > max)
			{
				max = result[i][pos % 6];
				count++;
			}
			i++;
		}
		if (input[pos % 6] != count)
			return (1);
	}
	return (0);
}

int	ft_check_line_left(int input[36], int pos, int result[6][6])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 0;
	max = 0;
	if (pos % 6 == 5)
	{
		while (i < 6)
		{
			if (result[pos / 6][i] > max)
			{
				max = result[pos / 6][i];
				count++;
			}
			i++;
		}
		if (input[pos / 6 + 12] != count)
			return (1);
	}
	return (0);
}

int	ft_check_line_right(int input[36], int pos, int result[6][6])
{
	int	i;
	int	max;
	int	count;

	i = 5;
	count = 0;
	max = 0;
	if (pos % 6 == 5)
	{
		while (i >= 0)
		{
			if (result[pos / 6][i] > max)
			{
				max = result[pos / 6][i];
				count++;
			}
			i--;
		}
		if (input[pos / 6 + 18] != count)
			return (1);
	}
	return (0);
}

int	ft_check_col_down(int input[36], int pos, int result[6][6])
{
	int	i;
	int	max;
	int	count;

	i = 5;
	count = 0;
	max = 0;
	if (pos / 6 == 5)
	{
		while (i >= 0)
		{
			if (result[i][pos % 6] > max)
			{
				max = result[i][pos % 6];
				count++;
			}
			i--;
		}
		if (input[pos % 6 + 6] != count)
			return (1);
	}
	return (0);
}

int	ft_check_all(int input[36], int pos, int result[6][6])
{
	if (ft_check_line_left(input, pos, result) == 1)
		return (1);
	if (ft_check_line_right(input, pos, result) == 1)
		return (1);
	if (ft_check_col_down(input, pos, result) == 1)
		return (1);
	if (ft_check_col_up(input, pos, result) == 1)
		return (1);
	return (0);
}
