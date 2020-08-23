#include "../proto.h"

int		verif(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '0')
	{
		if (!is_num(str[i + 1]))
			break;
		i++;
	}
	while (str[i] && is_num(str[i]))
	{
		num++;
		i++;
	}
	while (str[i])
	{
		if (!is_space(str[i]))
			return (0);
		i++;
	}
	if (num == 0)
		return (0);
	return (1);
}
