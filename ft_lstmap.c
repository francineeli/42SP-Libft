/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:15:27 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/22 15:42:05 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list newlist;
	
	if (lst)
		(*f)(lst->content)
		newlist = 
	while (*lst != NULL)
	{
		(*del)(lst->content->next);
		free(lst)
	}
	*lst == NULL;	
}
}