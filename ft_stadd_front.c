/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli_bar@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:40:50 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/20 16:53:18 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_stadd_front(t_list **lst, t_list *new)
{
	t_list	*bonus;

	bonus = (t-list)malloc (sizeof(t_list));
	if (!bonus)
		return (NULL);
	new->next = lst;
	lst = new;
}
