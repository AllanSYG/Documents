/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:14:08 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 14:14:09 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				result = 1;
			else
				return (0);
			i++;
		}
	}
	else
		return (1);
	return (result);
}
