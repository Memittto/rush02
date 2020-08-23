/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcornet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 17:01:26 by gcornet-          #+#    #+#             */
/*   Updated: 2020/08/22 18:54:46 by gcornet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		word_counter(char *str);
int		ft_check_if(char *str, char *tf);
int		ft_len_index(char *str);
char	*ft_clean(char *str, char *rendu);

#endif
