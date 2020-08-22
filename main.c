#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	(void) argv;

	if (argc == 2)
	{
		// Dict de base
	}
	else if (argc == 3)
	{
		// Dict avec plusieurs mode
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
