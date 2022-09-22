/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:40:50 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/22 13:40:05 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_stadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{ 
		if(*lst)
			new->next = *lst;
		*lst = new;
}
