/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:52:45 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/23 15:34:24 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

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
