/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:41:23 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/10 18:02:43 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*strd;
	char	*strs;
	size_t	i;
	size_t	tam;

	i = 0;
	strd = (char *)dst;
	strs = (char *)src;
	tam = ft_strlen(strs);
	if (size == 0)
	{
		return (tam);
	}
	while (strs[i] != '\0' && i < size - 1)
	{
		strd[i] = strs[i];
		i++;
	}
	strd[i] = '\0';
	return (tam);
}
