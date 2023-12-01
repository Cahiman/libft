/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:56:06 by parallels         #+#    #+#             */
/*   Updated: 2023/11/28 20:56:14 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_tmp;

	while (*lst != NULL)
	{
		lst_tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_tmp;
	}
}