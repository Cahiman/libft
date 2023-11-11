/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:23:57 by baiannon          #+#    #+#             */
/*   Updated: 2023/11/10 14:46:54 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == ((unsigned char) c))
					return ((char *) &s[i]);
		i--;
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
	printf("%s\n", strrchr(str, c));
	printf("%s\n", ft_strrchr(str, c));
}