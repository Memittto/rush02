#include "../proto.h"

int		is_space(char c)
{
	if (c == '\t' || c == '\v' || c == '\f')
		return (1);
	if (c == '\n' || c == ' ' || c == '\r')
		return (1);
	return (0);
}

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
