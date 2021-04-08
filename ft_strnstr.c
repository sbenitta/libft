/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:39:46 by sbenitta          #+#    #+#             */
/*   Updated: 2021/04/05 17:25:15 by sbenitta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	chaine;

	i = 0;
	if (src[i] == 0)
		return ((char *)dst);
	while (dst[i] && i < len)
	{
		chaine = 0;
		while (dst[i + chaine] == src[chaine])
		{
			if (len <= i + chaine)
				return (0);
			if (src[chaine + 1] == 0)
				return ((char *)dst + i);
			chaine++;
		}
		i++;
	}
	return (0);
}
