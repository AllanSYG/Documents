/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:42:13 by asayag            #+#    #+#             */
/*   Updated: 2025/02/08 19:46:23 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putnbr(int c);
void	ft_putchar(char c);

void	result1(int result[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 6)
	{
		while (i < 6)
		{
			ft_putnbr(result[j][i]);
			ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
