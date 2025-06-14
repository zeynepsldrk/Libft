/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedurak <zedurak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:25:49 by zedurak           #+#    #+#             */
/*   Updated: 2025/06/14 18:25:49 by zedurak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
	{
		return (NULL);
	}
	while (s[i])
	{
		result = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
