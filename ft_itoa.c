/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperez-i <fperez-i@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:18:04 by fperez-i          #+#    #+#             */
/*   Updated: 2025/05/18 17:56:37 by fperez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitos(int n)
{
	int	cont;

	cont = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n == -2147483648)
	{
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		cont = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_invertir(char *str, int i)
{
	int		start;
	char	temp;

	start = 0;
	while (start < (i - 1))
	{
		temp = str[start];
		str[start] = str[i - 1];
		str[i - 1] = temp;
		start++;
		i--;
	}
	return (str);
}

int	ft_insert(char *str, int n, int i)
{
	int		negat;
	int		num;

	negat = 0;
	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (i);
	}
	if (n < 0)
	{
		negat = 1;
		n = -n;
	}
	while (n)
	{
		num = n % 10;
		str[i++] = '0' + num;
		n = n / 10;
	}
	if (negat)
		str[i++] = '-';
	str[i] = '\0';
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		cont;

	i = 0;
	cont = ft_digitos(n);
	str = malloc(sizeof(char) * (cont + 1));
	if (!str)
	{
		return (0);
	}
	if (n == -2147483648)
	{
		i = ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	i = ft_insert(str, n, i);
	str = ft_invertir(str, i);
	return (str);
}
