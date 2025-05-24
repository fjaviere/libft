/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:55:15 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/01 17:16:15 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*mems;
	unsigned char	*memd;
	size_t			tam;

	mems = (unsigned char *)src;
	memd = (unsigned char *)dest;
	tam = n;
	if (mems == NULL && memd == NULL)
		return (NULL);
	if (memd >= mems)
	{
		while (tam--)
		{
			memd[tam] = mems[tam];
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, tam);
		return (dest);
	}
}
