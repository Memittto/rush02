char	*ft_clean(char *str, char *rendu)
{
	int		i;
	int		x;

	i = 0;
	while (str[i] != ':')
		i++;
	while (str[i] == ':' || str[i] == 32)
		i++;
	x = 0;
	while (str[i])
	{
		rendu[x] = str[i];
		i++;
		x++;
	}
	return (rendu);
}
