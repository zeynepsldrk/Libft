/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:22:33 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:22:33 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (b > a)
	{
		while (n--)
		{
			a[i] = b[i];
			i++;
		}
		return (dest);
	}
	while (n--)
	{
		a[n] = b[n];
	}
	return (dest);
}
