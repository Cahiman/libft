/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:40:43 by baiannon          #+#    #+#             */
/*   Updated: 2023/11/10 16:15:15 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	char *ss;

	ss = (char *) s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char s[]="TEST";
	int c = 'H';
    size_t n = 4;

	printf("%s\n", (char *)ft_memchr(s, c, n));
	printf("%s\n", (char *)memchr(s, c, n));
}
