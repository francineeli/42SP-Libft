/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:23:52 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/22 15:02:15 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delone(t_list *lst, void(*del)(void *))
{
	if (*lst)
	{
		(*del)(lst->content);
		free(lst)
	}
	lst->content = new;	
}