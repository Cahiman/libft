/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:37:16 by baiannon          #+#    #+#             */
/*   Updated: 2023/11/07 17:43:12 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char *dst;
	unsigned char *srce;

	dst = (unsigned char *) dest;
	srce = (unsigned char *) src;
	
	i = 0;
	while (i < n)
	{
		dst[i] = srce[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>

int	main()
{
	char s1[100]="";
	const char s2[]="jetest";
	size_t n = 5;

	printf("%s\n", s2);
	printf("%p\n", ft_memcpy(s1, s2, n));
	printf("%s\n", s1);
	printf("%s\n", s2);
}
