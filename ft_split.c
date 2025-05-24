/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:15:00 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/18 12:38:07 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_mem(char **ptr, int i)
{
	while (i >= 0)
	{
		free(ptr[i]);
		i--;
	}
	free(ptr);
}

static int	subcadenas(char const *s, char c)
{
	int	subs;

	subs = 0;
	if (!*s)
	{
		return (0);
	}
	while (*s)
	{
		if (*s == c)
		{
			subs++;
			while (*s == c)
			{
				s++;
			}
		}
		else
		{
			s++;
		}
	}
	subs++;
	return (subs);
}

static char	**trocea_str(char **ptr, char *str, char c, int subs)
{
	int		i;
	char	*cad;

	i = 0;
	while (i < subs)
	{
		while (*str == c)
			str++;
		cad = ft_strchr(str, c);
		if (cad == NULL)
			cad = str + ft_strlen(str);
		ptr[i] = ft_substr(str, 0, cad - str);
		if (!ptr[i])
		{
			ft_free_mem(ptr, i - 1);
			return (NULL);
		}
		i++;
		str = cad;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		subs;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	str = ft_strtrim(s, a);
	if (!str)
		return (NULL);
	subs = subcadenas(str, c);
	ptr = ft_calloc((subs + 1), sizeof(char *));
	if (!ptr)
	{
		free(str);
		return (NULL);
	}
	ptr = trocea_str(ptr, str, c, subs);
	free(str);
	if (!ptr)
	{
		return (NULL);
	}
	return (ptr);
}
