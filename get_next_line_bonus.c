/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:45:50 by gade-lim          #+#    #+#             */
/*   Updated: 2021/07/07 10:34:57 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*check_start(int fd, char **line)
{
	char	*buf;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	return (buf);
}

int	get_next_line(int fd, char **line)
{
	int			readen;
	char		*buf;
	static char	*result;

	buf = check_start(fd, line);
	if (buf == NULL)
		return (-1);
	readen = 1;
	while (readen != 0 && check_readen(result) == 0)
	{
		readen = read(fd, buf, BUFFER_SIZE);
		if (readen == -1)
			return (free(buf), -1);
		buf[readen] = '\0';
		result = ft_strjoin(result, buf);
	}
	free(buf);
	*line = current_line(result);
	result = save_readen(result);
	if (readen == 0)
		return (0);
	if (result == NULL)
		return (free(result), -1);
	return (1);
}
