/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 12:40:07 by gcornet-          #+#    #+#             */
/*   Updated: 2020/08/23 16:43:30 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "proto.h"

#define BUF_SIZE 10001

int read_dico(char *str)
{
	int 	fd;
	char 	buf[BUF_SIZE + 1];
	char 	**mat;
	int 	i;
	int 	find;
	char	*rendu;

	i = 0;
	fd = open("numbers.dict", O_RDWR);
	if (fd == -1)
	{
		printf("Open() error\n");
		return (1);
	}

	read(fd, buf, BUF_SIZE);
	buf[ft_strlen(buf)] = '\0';

	if (!(mat = malloc(sizeof(char*) * (word_counter(buf) + 1))))
		return (0);

	mat = ft_split(buf);
	mat[word_counter(buf)] = NULL;

	find = 0;
	while (i < word_counter(buf))
	{
		if (ft_check_if(mat[i], str))
		{
			rendu = malloc(sizeof(char) * (ft_strlen(mat[i]) + 1));
			ft_clean(mat[i], rendu);
			write(1, rendu, ft_strlen(rendu));
			write(1, "\n", 1);
			free(rendu);
			find = 1;
			break;
		}
		i++;
	}
	if (!find)
	{
		if(!ft_algo(str))
			write(1, "Dict Error\n", 11);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
