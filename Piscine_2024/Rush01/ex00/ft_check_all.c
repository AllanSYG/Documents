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

int	ft_check_col_up(int input[16], int pos, int result[4][4])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 0;
	max = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (result[i][pos % 4] > max)
			{
				max = result[i][pos % 4];
				count++;
			}
			i++;
		}
		if (input[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	ft_check_line_left(int input[16], int pos, int result[4][4])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 0;
	max = 0;
	if (pos % 4 == 5)
	{
		while (i < 4)
		{
			if (result[pos / 4][i] > max)
			{
				max = result[pos / 4][i];
				count++;
			}
			i++;
		}
		if (input[pos / 4 + 8] != count)
			return (1);
	}
	return (0);
}

int	ft_check_line_right(int input[16], int pos, int result[4][4])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 0;
	max = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (result[pos / 4][i] > max)
			{
				max = result[pos / 4][i];
				count++;
			}
			i--;
		}
		if (input[pos / 4 + 12] != count)
			return (1);
	}
	return (0);
}

int	ft_check_col_down(int input[16], int pos, int result[4][4])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 0;
	max = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (result[i][pos % 4] > max)
			{
				max = result[i][pos % 4];
				count++;
			}
			i--;
		}
		if (input[pos % 4 + 4] != count)
			return (1);
	}
	return (0);
}

int	ft_check_all(int input[16], int pos, int result[4][4])
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
