/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:39:25 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/05 17:50:07 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_term(char a, char b)
{
	if (a == '\0' && b != '\0')
	{
		return (-1);
	}
	else if (b == '\0' && a != '\0')
	{
		return (1);
	}
	else if (a == '\0' && b == '\0')
	{
		return (0);
	}
	return (5);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cad1;
	unsigned char	*cad2;
	int				rest;
	int				term;

	cad1 = (unsigned char *)s1;
	cad2 = (unsigned char *)s2;
	while (n--)
	{
		term = ft_term(*cad1, *cad2);
		if (term >= -1 && term <= 1)
		{
			return (term);
		}
		rest = *cad1 - *cad2;
		if (rest != 0)
		{
			return (rest);
		}
		cad1++;
		cad2++;
	}
	return (0);
}
