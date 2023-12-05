/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:46:32 by mabrito-          #+#    #+#             */
/*   Updated: 2023/10/23 13:18:13 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] && (i < len))
	{
		while (big[i + j] == little[j] && big[i + j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *) big + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
int	main(void)
{
    const char *a = "hello world";
    const char *b = "";
    size_t len = 11;
    char *result = ft_strnstr(a, b, len);
    
    printf("%zu", result - a);
    return(0);
}*/