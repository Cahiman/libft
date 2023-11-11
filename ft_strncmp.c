/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:48:34 by baiannon          #+#    #+#             */
/*   Updated: 2023/11/10 15:22:58 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && i <= n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);	
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char s1[]="Je test";
	char s2[]="Je test";
	size_t n = 6;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}
