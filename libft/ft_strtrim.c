/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:55:51 by yusong            #+#    #+#             */
/*   Updated: 2017/10/18 13:40:19 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trimlen(char *s)
{
	size_t	i;
	size_t	space;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	space = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i--;
			space++;
		}
	}
	return (len - space);
}

char			*ft_strtrim(char const *s)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len = trimlen((char *)s);
	new = (char *)malloc(sizeof(*new) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < len)
	{
		new[j] = s[i];
		j++;
		i++;
	}
	new[j] = '\0';
	return (new);
}
