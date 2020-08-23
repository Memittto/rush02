/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:52:45 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/23 15:08:11 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

void ft_search_and_print(int nbr)
{
	//char nb;
	(void)nbr;
	//nb = malloc(sizeof(char) * 1000);
	//nb = ft_itoa(nbr);
	//printf("* %c", nb);
}

char *ft_algo(char *dico, int nbr)
{
	int i;
	(void)dico;
	
	i = 0;
	while (nbr >= 1)
	{
		ft_search_and_print(nbr % 10);
		nbr = nbr / 10;
	}
	return ("OK");
}
