/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:27:30 by mabrito-          #+#    #+#             */
/*   Updated: 2023/11/02 10:54:45 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		if (s[i])
			i++;
	}
	return (count);
}

static void	ft_freeloop(char **finalstr, int final_len)
{
	int	i;

	i = 0;
	while (i < final_len)
	{
		free(finalstr[i]);
		i++;
	}
	free(finalstr);
}

char	*ft_malloc(char const **s, char c)
{
	char	*word;
	int		word_length;
	int		j;

	j = 0;
	word_length = wlen(*s, c);
	word = (char *)malloc(sizeof(char) * (word_length + 1));
	if (!word)
		return (NULL);
	while (j < word_length)
	{
		word[j] = (*s)[j];
		j++;
	}
	word[word_length] = '\0';
	*s += word_length;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**finalstr;
	int		i;

	if (!s)
		return (NULL);
	finalstr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!finalstr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			break ;
		finalstr[i] = ft_malloc(&s, c);
		if (!finalstr[i])
		{
			ft_freeloop(finalstr, i);
			return (NULL);
		}
		i++;
	}
	finalstr[i] = NULL;
	return (finalstr);
}
/*
int	main()
{
	const char *a = "a marta é linda e modesta";
	char b = 'a';
	char **finalstr;
	int i = 0;

	finalstr = ft_split(a, b);
	while(finalstr[i])
	{
		printf("%s\n", finalstr[i]);
		i++;
	}
	return (0);
}*/
