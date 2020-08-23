#include "../proto.h"

int	nb_len(int nb)
{
	int count;

	count = 0;
	if(nb < 0)
	{
		nb = nb * -1;
		count++;
	}

	while (nb > 0)
	{
		nb = nb /10;
		count++;
	}
	return count;
}

char	*ft_itoa(int nb)
{
	char *str;
	long  n;
	int len;

	n = nb;
	len = nb_len(n);

	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';

	n = nb;
	if (n == 0)
	{
		str[0] = '0';
		return str;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[len - 1] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}
