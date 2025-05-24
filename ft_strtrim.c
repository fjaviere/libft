/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:14:12 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/18 12:14:38 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	ptr = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
		{
			start++;
		}
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		{
			end--;
		}
		ptr = (char *)malloc(end - start + 1);
		if (ptr)
		{
			ft_strlcpy(ptr, &s1[start], end - start + 1);
		}
	}
	return (ptr);
}
