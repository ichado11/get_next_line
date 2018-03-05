/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 13:24:33 by yusong            #+#    #+#             */
/*   Updated: 2017/10/18 13:13:52 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;
	unsigned char	t;

	t = (unsigned char)c;
	cur = (unsigned char *)s;
	while (n--)
	{
		if (*cur == t)
			return (cur);
		if (n)
			cur++;
	}
	return (NULL);
}
