/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:42:44 by mabrito-          #+#    #+#             */
/*   Updated: 2023/10/21 14:56:19 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *string, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (len == 0 || start >= ft_strlen(string))
	{
		s2 = malloc(1);
		if (!s2)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	if (start + len > ft_strlen(string))
		len = ft_strlen(string) - start;
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	while (i < len && string[start])
	{
		s2[i++] = string[start];
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
