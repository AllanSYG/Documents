/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:55:02 by asayag            #+#    #+#             */
/*   Updated: 2025/02/12 14:55:04 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	oldmin;
	int	tab2[100];

	i = 0;
	j = 0;
	min = 100;
	oldmin = 0;
	while ((tab2[size - 1] = 0))
	{
		while (i <= size)
		{
			if (tab[i] < min && tab[i] > oldmin)
				min = tab[i];
			i++;
		}
		i = 0;
		tab2[j] = min;
		oldmin = min;
		j++;
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
	int tab[6] = { 5, 4, 3, 2, 1, 6};
	int size;
	size = 6;
	ft_sort_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);
}
