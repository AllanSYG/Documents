/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_0.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:22:54 by asayag            #+#    #+#             */
/*   Updated: 2025/02/09 21:23:04 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		*ft_1(char *argv);

void	ft_table0(int input[36]);

void	ft_0(char **argv)
{
	int	*input;

	input = ft_1(argv[1]);
	ft_table0(input);
}
