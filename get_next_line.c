/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:14:04 by yusong            #+#    #+#             */
/*   Updated: 2018/01/11 16:22:56 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strclen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	return (i);
}

char	*ft_endf(char *s)
{
	if (ft_strchr(s, '\n'))
	{
		ft_strcpy(s, ft_strchr(s, '\n') + 1);
		return (s);
	}
	if (ft_strclen(s) > 0)
	{
		ft_strcpy(s, ft_strchr(s, '\0'));
		return (s);
	}
	return (NULL);
}

int		get_next_line(int const fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*stock[256];
	int			res;
	char		*tmp;

	if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (!(stock[fd]) && (stock[fd] = ft_strnew(0)) == NULL)
		return (-1);
	while (!(ft_strchr(stock[fd], '\n')) &&
			(res = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[res] = '\0';
		tmp = stock[fd];
		stock[fd] = ft_strjoin(tmp, buff);
		free(tmp);
	}
	*line = ft_strsub(stock[fd], 0, ft_strclen(stock[fd]));
	if (ft_endf(stock[fd]) == NULL)
		return (0);
	return (1);
}
