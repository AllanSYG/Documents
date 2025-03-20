/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:08:53 by asayag            #+#    #+#             */
/*   Updated: 2025/02/13 11:14:04 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return(0);
	n = n - 1;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		if (i ==n)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char *s1 = "abcd";
	char *s2 = "wxfc";
	unsigned int n = 3;
	printf("%i", ft_strncmp(s1,s2, n));
	return (0);
}*/
