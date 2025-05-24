/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:04:14 by fperez-i          #+#    #+#             */
/*   Updated: 2025/04/29 17:17:51 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*memd;
	unsigned char	*mems;

	memd = (unsigned char *)dest;
	mems = (unsigned char *)src;
	while (n >= 1)
	{
		if (memd == 0 && mems == 0)
		{
			return (0);
		}
		n--;
		*memd = *mems;
		memd++;
		mems++;
	}
	return (dest);
}
