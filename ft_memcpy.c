/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:22:20 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:22:20 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;
	size_t				i;

	i = 0;
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
