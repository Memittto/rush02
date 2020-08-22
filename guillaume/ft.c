
#include <unistd.h>
#include "ft.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		nb = nb % 10 + 48;
		write(1, &nb, 1);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		word_counter(char *str)
{
	int		counter;
	int		i;
	int		word;

	counter = 0;
	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			counter++;
		}
		i++;
	}
	return (counter);
}
