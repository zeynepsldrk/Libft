/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:19:05 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:19:05 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)malloc(nitems * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < (nitems * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
