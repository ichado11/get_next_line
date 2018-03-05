/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <yusong@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:13:06 by yusong            #+#    #+#             */
/*   Updated: 2017/10/18 16:11:45 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int		length;
	int		isneg;
	char	*new;

	isneg = 1;
	length = ft_count(n);
	if (!(new = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	if (n == 0)
		new[0] = '0';
	new[length] = '\0';
	while (n != 0)
	{
		if (n < 0)
		{
			new[0] = '-';
			isneg = (-1);
		}
		new[length - 1] = (((n % 10) * (isneg)) + '0');
		n = n / 10;
		length--;
	}
	return (new);
}
