/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:26:11 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:26:11 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while ((needle[j] != '\0')
			&& (haystack[i + j] == needle[j]) && (i + j < len))
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
