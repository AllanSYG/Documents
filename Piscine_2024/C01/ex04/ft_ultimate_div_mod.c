/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:38:45 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 11:38:47 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a;
	bb = *b;
	*a = aa / bb;
	*b = aa % bb;
}

/*int	main(void)
{
	int a;
	int b;
	
	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a,&b);
	return (0);
}*/
