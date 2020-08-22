/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:20:44 by sserbin           #+#    #+#             */
/*   Updated: 2020/08/22 19:20:46 by sserbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int 	ft_size_dict(char *str);
int		ft_verif_add(char *str);
int		ft_strlen(char *str);
int		ft_add_to_dict(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(int fd, char *str);

#endif
