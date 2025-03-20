/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:20:45 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 13:20:47 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
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
			else if (str[i] >= 'A' && str[i] <= 'Z')
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
/*
int	main(void)
{
	char *str;
	str = "testsdfgdfgdfgdfgdff";
	ft_str_is_alpha(str);
	return (0);
}*/
