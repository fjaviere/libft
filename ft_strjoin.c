/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:56:44 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/17 16:14:58 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	tam;
	size_t	i;

	tam = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(tam + 1);
	if (ptr == NULL || (!s1 && !s2))
		return (NULL);
	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	i = 0;
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	ft_memcpy(&ptr[i], s2, tam - i);
	ptr[tam] = '\0';
	return (ptr);
}
