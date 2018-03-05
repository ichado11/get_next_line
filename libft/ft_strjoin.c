/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:40:11 by yusong            #+#    #+#             */
/*   Updated: 2017/10/13 14:35:59 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;

	if (!s1 || !s2)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!new_s)
		return (NULL);
	ft_strcpy(new_s, s1);
	ft_strcat(new_s, s2);
	return (new_s);
}
