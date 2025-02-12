/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:11:37 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 14:11:39 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] >= '0' && str[i] <= '9')
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
