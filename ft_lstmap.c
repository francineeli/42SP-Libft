/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:15:27 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/22 15:34:41 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlist;
	
	newlist = (t_list *)malloc(sizeof(t_list *));
	if (newlist == NULL)
		return (NULL);
	if(!*del) || (!*f)
	   return (NULL);	
	while (*lst != NULL)
	{
		newlist = *(ft_lstiter(*lst,;
		free(lst)
	}
	*lst == NULL;	
}
}
