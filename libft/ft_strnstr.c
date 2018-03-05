/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 15:56:49 by yusong            #+#    #+#             */
/*   Updated: 2017/10/18 15:10:21 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(little);
	if (!j)
		return ((char *)big);
	i = ft_strlen(big);
	len = (len > i) ? i : len;
	while (j <= len)
	{
		if (!ft_memcmp(big, little, j))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
