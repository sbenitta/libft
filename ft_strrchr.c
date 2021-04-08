/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:37:13 by sbenitta          #+#    #+#             */
/*   Updated: 2021/04/08 13:24:30 by sbenitta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s[len] != (char)c && len > 0)
	{
		len--;
	}
	if (s[len] == (char)c)
		return ((char *) s + len);
	else
		return (NULL);
	return (0);
}
