/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:39:09 by gade-lim          #+#    #+#             */
/*   Updated: 2021/07/05 11:26:00 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
char	*ft_strjoin(char *s1, char const *s2);
char	*current_line(char *str);
int		check_readen(char *result);
char	*save_readen(char *str);

#endif