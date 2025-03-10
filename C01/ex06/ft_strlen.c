/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:58:36 by asayag            #+#    #+#             */
/*   Updated: 2025/02/06 11:58:37 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (str[i])
	{
		n = n + 1;
		i++;
	}
	return (n);
}

/*int	main(void)
{
	char	*str;
	str = "test123";
	ft_strlen(str);
	return (0);
}*/
