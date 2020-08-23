int		ft_len_index(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != ':')
		i++;
	return (i);
}
