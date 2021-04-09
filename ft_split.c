/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:54:53 by sbenitta          #+#    #+#             */
/*   Updated: 2021/04/09 12:12:12 by sbenitta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comptemot(char const *s, char c)
{
	unsigned int	i;
	int				counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] && (s[i] != c))
			i++;
	}
	return (counter);
}

static int	lougueurmot(const char *s, char c, int a)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (a != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			a--;
		i++;
	}
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*cpymot(char const *s, char c, int a)
{
	char	*mot;
	int		i;
	int		j;

	i = 0;
	j = 0;
	mot = (char *)malloc(sizeof(char) * longueurmot(s, c, a) + 1);
	if (!mot)
		return (NULL);
	while (a != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			a--;
		i++;
	}
	while (s[i] != '\0' && s[i] != c)
	{
		mot[j] = s[i];
		j++;
		i++;
	}
	mot[j] = '\0';
	return (mot);
}

static void	freetableau(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		free(tab[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		cases;
	char	**tableau;

	if (!s)
		return (NULL);
	cases = comptemot(s, c);
	tableau = (char **)malloc(sizeof(char *) * (cases + 1));
	if (!tableau)
		return (NULL);
	i = 0;
	while (i < cases)
	{
		tableau[i] = cpymot(s, c, i);
		if (!tableau[i])
		{
			freetableau(tableau);
			free(tableau);
			return (NULL);
		}
		i++;
	}
	tableau[i] = 0;
	return (tableau);
}
