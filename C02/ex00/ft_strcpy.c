/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:16:23 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 12:16:24 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src [i];
		i++;
	}
	return ("\0");
}
/*
int	main(void)
{
	char* dest;
	char* src;

	dest = "";
	src = "test";
	ft_strcpy(dest, src);
	return (0);
}*/
