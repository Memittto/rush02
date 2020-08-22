#include "../proto.h"

void	ft_putstr(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}
