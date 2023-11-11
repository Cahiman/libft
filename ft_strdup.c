/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:56:15 by parallels         #+#    #+#             */
/*   Updated: 2023/11/11 16:26:40 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s) //florian
{
	int	i;
	char *dest;
	size_t	len;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char *c;
	char *s = NULL;
	c = ft_strdup(s);
	if (c == NULL)
		printf("error");
	//printf("%s\n", ft_strdup(s));
}