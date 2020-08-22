/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 12:40:07 by gcornet-          #+#    #+#             */
/*   Updated: 2020/08/22 17:19:21 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"

#define BUF_SIZE 4096

char	**ft_split(char *str, char *charset);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

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
	ft_putnbr(ret);
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
