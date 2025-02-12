/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:23:24 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 14:23:25 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] >= '96')
				return (0);
			else if (tr[i] <= '127')
				return (0);
			else
				result = 1;
			i++;
		}
	}
	else
		return (1);
	return (result);
}
