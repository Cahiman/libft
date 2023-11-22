/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:57:45 by baiannon          #+#    #+#             */
/*   Updated: 2023/11/21 18:26:58 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *new_word(char const *s, char c)
{
	int		i;
	char	*str;
	
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (in_word == 0)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		s++;
	}
	return (count);
}

void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free (s[i]);
		i++;
	}
	free (s);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while(s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			tab[j] = new_word(&s[i], c);
			if (tab[j] == NULL)
			{
				ft_free(tab);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

#include <stdio.h>

int	main()
{
	int i;
	i = 0;
	const char str[]="Je/test/mon/code";
	char c = '/';
	char **split = ft_split(str, c);
	
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]);
		i++;
	}
	ft_free(split);
}