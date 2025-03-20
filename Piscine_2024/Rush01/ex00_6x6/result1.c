#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int c);

void	result1(int result[6][6])
{
	int i;
	int j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			ft_putnbr(result[i][j]);
			if (j < 5)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
