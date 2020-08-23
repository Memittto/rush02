/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 21:57:35 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/23 11:55:29 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

int		word_counter(char *str);

char	**splitter(char *str, char **tab, int word_len)
{
	int	k;
	int	l;
	int j;

	k = 0;
	j = 0;
	while (k < word_counter(str))
	{
		word_len = 0;
		while (str[j] && str[j] == '\n')
			j++;
		while (str[j++] && str[j] != '\n')
			word_len++;
		if (!(tab[k] = malloc(sizeof(char) * word_len + 2)))
			return (0);
		l = -1;
		while (++l <= word_len)
			tab[k][l] = str[l + j - word_len - 1];
		tab[k][l] = '\0';
		k++;
	}
	tab[k] = "\0";
	return (tab);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		word_len;
	word_len = 0;
	tab = malloc(sizeof(char*) * word_counter(str) + 1);
	if (tab == NULL)
		return (NULL);
	splitter(str, tab, word_len);
	return (tab);
}
