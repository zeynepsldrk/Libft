/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:22:53 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:22:53 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t num)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)p;
	while (i < num)
	{
		b[i] = (unsigned char)value;
		i++;
	}
	return (p);
}
