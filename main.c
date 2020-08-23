/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:20:37 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/23 15:50:48 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!verif(argv[1]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (!(argv[1] = ft_strdup(ft_itoa(ft_atoi(argv[1])))))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		read_dico(argv[1]);
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
