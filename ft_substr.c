/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 12:03:11 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/17 12:16:39 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	if ((start > i) || (i == 0))
	{
		ptr = ft_calloc (1, 1);
		return (ptr);
	}
	if (len > (i - start))
		len = i - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	j = 0;
	while (j < len)
	{
		ptr[j] = s[start + j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
