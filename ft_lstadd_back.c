/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:42:39 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/22 14:22:47 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *backnode;
	
	if (lst)
	{ 
		if(*lst)
		{
			backnode = ft_lstlast(*lst);
			backnode->next = new;
		}
		else
			*lst = new;
}