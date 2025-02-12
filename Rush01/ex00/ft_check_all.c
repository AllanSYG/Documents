/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 04:26:08 by asayag            #+#    #+#             */
/*   Updated: 2025/02/09 04:26:09 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_check_col_up(char *input, int pos, char **result)
{
	int	i;
	int	max;
	int	count;
}

void	ft_check_all(char *input, int pos, char **result)
{
	if (ft_check_col_up() == 0)
		return (0);
	if (ft_check_col_down() == 0)
		return (0);
	if (ft_check_line_left() == 0)
		return (0);
	if (ft_check_line_right() == 0)
		return (0);
	return (1);
}
