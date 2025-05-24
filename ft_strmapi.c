/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:12:54 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/20 18:22:18 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	tam;
	size_t	i;
	char	*str;

	tam = ft_strlen(s);
	i = 0;
	str = malloc(sizeof(char) * (tam + 1));
	if (!str)
	{
		return (0);
	}
	while (i < tam)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
