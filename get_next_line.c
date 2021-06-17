/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:45:50 by gade-lim          #+#    #+#             */
/*   Updated: 2021/06/17 16:14:12 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*result;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
		return (-1);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (-1);
	if (read(fd, buf, BUFFER_SIZE) == -1)
	{
		free(buf);
		return (-1);
	}
	buf[read(fd, buf, BUFFER_SIZE)] = '\0';
	result = ft_strjoin(result, buf);
	free(buf);
	*line = current_line(result);
	if (read(fd, buf, BUFFER_SIZE) == 0)
		return (0);
	return (1);
}
