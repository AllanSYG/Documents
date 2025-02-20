/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:02:12 by asayag            #+#    #+#             */
/*   Updated: 2025/02/08 16:38:15 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_0(char **argv);

void	check1(int i, int check, int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1][47] == 0)
		{
			while (i <= 47)
			{
				if (argv[1][i] >= '1' && argv[1][i] <= '6')
				{
					if (argv[1][i + 1] == 32 || argv[1][i + 1] == 0)
						check = check + 1;
				}
				else
					write(1, "Error\n", 6);
				i = i + 2;
			}
			if (check == 24)
				ft_0(argv);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	check1(i, check, argc, argv);
	return (0);
}
