#include <stdlib.h>
#include <unistd.h>
#include "proto.h"

int main(int argc, char **argv)
{
	(void) argv;

	if (argc == 2)
	{
		// Dict de base
		// argv 1 est la valeur que l'on veut get
	}
	else if (argc == 3)
	{
		if (argv[1] = "add")
		{
			if (ft_add_to_dict(argv[2]))
				return (0);
			write(1, "Error\n", 6);
			// ajouter une entree
			// argv 2 est la valeur par exemple "4: four\n"
		}
		else if (argv[1] == "numbers.dict")
		{
			// aller chercher la valeur dans ce dict
			// argv 2 est la valeur a cherche
		}
		else if (argv[1] == "fr.dict")
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
