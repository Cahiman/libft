/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:06:42 by baiannon          #+#    #+#             */
/*   Updated: 2023/11/10 14:21:22 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ((unsigned char) c))
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == ((unsigned char) c))
		return ((char *) &s[i]);
	return (NULL);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char str[]="test enzo le con";
	int	c = '\0';
	printf("%s\n", strchr(str, c));
	printf("%s\n", ft_strchr(str, c));
}