#include <stdlib.h>
#include <stdio.h>
#include "proto.h"

/*
	Ft_add_to_it() 
	On recupere la chaine str;
	Il faut verifier qu'elle soit au bon format, sinon on return 0 pour erreur;
	Si c'est ok alors on l'ajout a notre dict
	Mais le truc c'est qu'il faut aussi gerer quelle dictionnaire
*/

/*
	ft_verif_add()
	Doit verifier qu'il y a bien un id, une value et un dict
	Verifier que le dict exist
	Verifier que l'id n'existe pas encore dans le dict en question
*/

int 	ft_size_dict(char *str)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (str[i] != ';')
		i++;
	x = 0;
	while (str[i])
	{
		x++;
		i++;
	}
	return (x - 1);
}

int		ft_verif_add(char *str)
{
	(void) str;
	return (1);
}

int		ft_size_id(char *str)
{
	int		i;

	i = 0;
	while (str[i] != ':')
	{
		i++;
	}
	return (i);
}

int		ft_add_to_dict(char *str)
{
	//char	*id;
	char	*value;
	char	*dict;
	int		i;
	int		x;

	if (ft_verif_add(str))
	{
			// Get Dict
			if (!(dict = malloc((ft_size_dict(str) + 1) * sizeof(char))))
				return (0);
			i = ft_strlen(str) - ft_size_dict(str);
			x = 0;
			while (i <= ft_strlen(str))
			{
				dict[x] = str[i];
				i++;
				x++;
			}
			dict[x] = '\0';

			// Get item to write
			if (!(value = malloc(sizeof(char) * (ft_strlen(str) - ft_size_dict(str)))))
				return (0);
			i = 0;
			while (str[i] != ';')
			{
				value[i] = str[i];
				i++;
			}
			value[i] = '\0';
			printf("%s - %s", dict, value);
			return (1);
	}
	return (0);
}
