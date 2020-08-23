/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 12:40:07 by gcornet-          #+#    #+#             */
/*   Updated: 2020/08/22 19:07:22 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"

#define BUF_SIZE 4096

char	**ft_split(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		word_counter(char *str);


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}

	int 	fd;
	char 	buf[BUF_SIZE + 1];
	char 	**mat;
	int 	i;
	int 	find;
	char	*rendu;

	i = 0;
	fd = open("numbers.dict.txt", O_RDWR);
	if (fd == -1)
	{
		printf("Open() error\n");
		return (1);
	}

	read(fd, buf, BUF_SIZE);
	buf[ft_strlen(buf)] = '\0';
//	ft_putstr(buf);

	if (!(mat = malloc(sizeof(char*) * (word_counter(buf) + 1))))
		return (0);

	mat = ft_split(buf);
	mat[word_counter(buf)] = NULL;

	find = 0;
	while (i < word_counter(buf))
	{
		if (ft_check_if(mat[i], argv[1]))
		{
			rendu = malloc(sizeof(char) * (ft_strlen(mat[i]) + 1));
			ft_clean(mat[i], rendu);
			write(1, rendu, ft_strlen(rendu));
			write(1, "\n", 1);
			find = 1;
			break;
		}
		// printf("%s \n", mat[i]);
		//ft_putstr(mat[i]);
		//ft_putstr("\n");
		i++;
	}
	if (!find)
		write(1, "Dict Error\n", 11);

	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
