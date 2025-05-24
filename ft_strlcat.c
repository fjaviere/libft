/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:15:49 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/10 19:36:25 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tamd;
	size_t	tams;
	size_t	i;

	tamd = ft_strlen(dst);
	tams = ft_strlen(src);
	if (size == 0 || size <= tamd)
	{
		return (size + tams);
	}
	i = 0;
	while (i + tamd < (size - 1) && src[i] != '\0')
	{
		dst[tamd + i] = src[i];
		i++;
	}
	dst[tamd + i] = '\0';
	return (tamd + tams);
}
