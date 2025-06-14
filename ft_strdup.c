/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:24:13 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:24:13 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*a;

	i = 0;
	while (s[i])
	{
		i++;
	}
	a = malloc((i + 1) * (sizeof(*s)));
	if (a == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
