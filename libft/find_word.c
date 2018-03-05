/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 15:51:44 by yusong            #+#    #+#             */
/*   Updated: 2017/10/18 15:59:55 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*find_word(char const *s, char c, int m)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = 0;
	while (m >= 0)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c && m > 0)
			i++;
		m--;
	}
	j = i;
	while (s[i] != c && s[i])
	{
		k++;
		i++;
	}
	return (ft_strsub(s, j, k));
}
