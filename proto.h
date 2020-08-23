/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:20:44 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/23 15:51:39 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

int		ft_size_dict(char *str);
int		ft_verif_add(char *str);
int		ft_strlen(char *str);
int		ft_add_to_dict(char *str);
int		ft_strcmp(char *s1, char *s2);
int		read_dico(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putstr_file(int fd, char *str);
int		word_counter(char *str);
int		ft_check_if(char *str, char *tf);
int		ft_len_index(char *str);
char	*ft_clean(char *str, char *rendu);
int		ft_atoi(char *s);
int		size_num(int nb);
void	engine(char *str, int n);
char	*ft_itoa(int n);
char	*ft_strdup(char *src);
char	*ft_strstr(char *str, char *need);
int		ft_strlen(char *str);
int 	is_space(char c);
int 	is_num(char c);
void 	ft_putchar(char c);
void 	ft_putstr(char *str);
int		verif(char *str);
char	**ft_split(char *str);
int		word_counter(char *str);
char	*ft_algo(char *dico, int nbr);

#endif
