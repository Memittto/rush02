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
