/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 15:43:46 by yusong            #+#    #+#             */
/*   Updated: 2017/10/18 15:57:48 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	if (!s)
		return (NULL);
	j = 0;
	i = count_word(s, c);
	if (!(tab = (char **)ft_memalloc(sizeof(char *) * (i + 1))))
		return (NULL);
	while (i)
	{
		tab[j] = find_word(s, c, j);
		i--;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
