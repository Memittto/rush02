/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:20:37 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/23 12:11:35 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "proto.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		// Dict de base
		// argv 1 est la valeur que l'on veut get
		on_aura_pas_0(argc, argv);
	}
	else if (argc == 3)
	{
		if (ft_strcmp(argv[1], "add") == 0)
		{
			if (ft_add_to_dict(argv[2]))
				return (0);
			write(1, "Error\n", 6);
			return (0);
		}
		else if (ft_strcmp(argv[1], "numbers.dict") == 0)
		{
			// aller hercher la valeur dans ce dict
			// argv 2 est la valeur a cherche
		}
		else if (ft_strcmp(argv[1], "fr.dict") == 0)
		{
			// aller chercher dans le dictionnaire du meme nom
			// argv 2 est la valeur
		}
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
