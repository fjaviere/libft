/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:59:14 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/20 19:05:28 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	tam;
	size_t	i;

	tam = ft_strlen(s);
	i = 0;
	while (i < tam)
	{
		f(i, &s[i]);
		i++;
	}
}
