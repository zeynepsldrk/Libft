/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:18:40 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:18:40 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *p, size_t num)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)p;
	while (i < num)
	{
		b[i] = 0;
		i++;
	}
}
