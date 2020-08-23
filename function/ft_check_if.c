#include "../proto.h"

int		ft_check_if(char *str, char *tf)
{
	int		i;
	int		x;
	int		remember;

	i = 0;
	while (str[i] && str[i] != ':')
	{
		x = 0;
		remember = i;
		while (str[i] == tf[x])
		{
			i++;
			x++;
		}
		if (x == ft_strlen(tf) && ft_len_index(str) == x )
			return (1);
		i = remember;
		i++;
	}
	return (0);
}
