/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 12:40:07 by gcornet-          #+#    #+#             */
/*   Updated: 2020/08/22 16:59:09 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096

char	**ft_split(char *str, char *charset);

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

int main()
{
	int fd;
	char buf[BUF_SIZE + 1];
	int ret;
	char *file = "numbers.dict.txt";
	fd = open(file, O_RDWR);
	if (fd == -1)
	{
		printf("Open() error\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);

	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
