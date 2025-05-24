/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:17:26 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/12 17:18:09 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (little[b] == '\0')
		return ((char *)big);
	while (big[b])
	{
		l = 0;
		while (big[b + l] == little[l] && (b + l) < len)
		{
			if (big[b + l] == '\0' && little[l] == '\0')
			{
				return ((char *)big + b);
			}
			l++;
		}
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
	}
	return (0);
}
