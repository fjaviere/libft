/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:08:30 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/24 20:31:43 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	tam;

	tam = nmemb * size;
	mem = malloc(tam);
	if (mem == NULL)
	{
		return (mem);
	}
	ft_bzero(mem, tam);
	return ((void *)mem);
}
