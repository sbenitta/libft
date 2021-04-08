/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:14:09 by sbenitta          #+#    #+#             */
/*   Updated: 2021/04/05 15:08:15 by sbenitta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointeur;

	pointeur = malloc(count * size);
	if (!pointeur)
		return (NULL);
	ft_bzero(pointeur, count * size);
	return (pointeur);
}
