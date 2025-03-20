/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:35:14 by asayag            #+#    #+#             */
/*   Updated: 2025/02/18 14:12:41 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	m;

	m = 1;
	i = 0;
	while (m <= n && src[i])
	{
		dest[i] = src[i];
		i++;
		m++;
	}
	while (m <= n)
	{
		dest[i] = '\0';
		i++;
		m++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[75] = "rwsgrgdgrgfgdfgrgdf";
	printf("%s", ft_strncpy(dest, "456789", 0));
	return (0);
}*/
