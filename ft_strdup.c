/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:25:07 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/15 21:33:00 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	tam;
	size_t	i;

	i = 0;
	tam = ft_strlen(s);
	ptr = malloc(tam + 1);
	if (ptr == NULL || s == NULL)
	{
		return (NULL);
	}
	while (i <= tam)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[tam + 1] = '\0';
	return (ptr);
}
