/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:20:44 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/23 12:34:06 by sserbin          ###   ########.fr       */
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
int		on_aura_pas_0(int argc, char **argv);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putstr_file(int fd, char *str);
int		word_counter(char *str);
int		ft_check_if(char *str, char *tf);
int		ft_len_index(char *str);
char	*ft_clean(char *str, char *rendu);


#endif
