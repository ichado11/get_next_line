/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:24:29 by yusong            #+#    #+#             */
/*   Updated: 2017/10/09 13:39:52 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	new_s = ft_strnew(len);
	if (!s)
		return (NULL);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len)
		*(new_s + i++) = *(s + start++);
	return (new_s);
}
