/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gade-lim <gade-lim@students.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:38:50 by gade-lim          #+#    #+#             */
/*   Updated: 2021/07/05 11:25:38 by gade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen_chr(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char		*new_s;
	size_t		i;
	size_t		j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	new_s = (char *)malloc((ft_strlen_chr(s1, '\0')
				+ ft_strlen_chr(s2, '\0') + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
	{
		new_s[i] = s2[j];
		i++;
		j++;
	}
	new_s[i] = '\0';
	return (free(s1), new_s);
}

char	*current_line(char *str)
{
	size_t	i;
	char	*result;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	check_readen(char *result)
{
	size_t	i;

	i = 0;
	if (result == NULL)
		return (0);
	while (result[i] != '\0')
	{
		if (result[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*save_readen(char *str)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (str == NULL)
		return (NULL);
	i = ft_strlen_chr(str, '\n');
	if (str[i] == '\0')
		return (free (str), NULL);
	res = (char *)malloc((ft_strlen_chr(str, '\0') - i) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i++;
	j = 0;
	while (str[i] != '\0')
	{
		res[j] = str[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (free(str), res);
}
