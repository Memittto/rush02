/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:52:45 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/23 15:56:30 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

#define BUF_SIZE 10001

char *ft_give_data(char *str)
{
	int 	fd;
	char 	buf[BUF_SIZE + 1];
	char 	**mat;
	int 	i;
	char	*rendu;

	i = 0;
	fd = open("numbers.dict", O_RDWR);
	if (fd == -1)
	{
		printf("Open() error\n");
		return ("FALSE");
	}

	read(fd, buf, BUF_SIZE);
	buf[ft_strlen(buf)] = '\0';

	if (!(mat = malloc(sizeof(char*) * (word_counter(buf) + 1))))
		return (0);

	mat = ft_split(buf);
	mat[word_counter(buf)] = NULL;

	while (i < word_counter(buf))
	{
		if (ft_check_if(mat[i], str))
		{
			rendu = malloc(sizeof(char) * (ft_strlen(mat[i]) + 1));
			ft_clean(mat[i], rendu);
			return (rendu);
		}
		i++;
	}
	return ("FALSE");
}

int	ft_puissance(int nb)
{
	int		total;

	total = 1;
	while (nb >= 1)
	{
		total = total * 10;
		nb--;
	}
	return (total);
}

void ft_search_and_print(int nbr, int i)
{
	char	*nb;

	nb = malloc(sizeof(char) * 100);
	nb = ft_itoa(nbr * ft_puissance(i));
	printf("* %s", nb);
	printf("\n");
	printf("=> %s \n", ft_give_data(nb));
}

char *ft_algo(char *dico, int nbr)
{
	int		i;

	(void)dico;
	i = 0;
	while (nbr >= 1)
	{
		ft_search_and_print(nbr % 10, i);
		nbr = nbr / 10;
		i++;
	}
	return ("OK");
}
