/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:27:40 by asayag            #+#    #+#             */
/*   Updated: 2025/02/12 14:36:36 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tab2;

	i = 0;
	while (i <= size)
	{
		tab2[size - 1 - i] = tab[i];
		i++;
	}
	i = 0;
	while (tab2[i])
	{
		tab[i] = tab2[i];
		i++;
	}
}

int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	int	size;

	size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);
}
