/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:30:06 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/09 15:41:37 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			tam;
	int				i;

	i = 0;
	tam = n;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (tam == 0)
	{
		return (0);
	}
	while (i < (int)tam)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		i++;
	}
	return (0);
}
