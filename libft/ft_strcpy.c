/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 15:12:57 by yusong            #+#    #+#             */
/*   Updated: 2017/10/04 15:09:53 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t cur;

	cur = 0;
	while (src[cur] != '\0')
	{
		dst[cur] = src[cur];
		cur++;
	}
	dst[cur] = '\0';
	return (dst);
}
