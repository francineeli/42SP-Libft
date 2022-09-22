/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:53:28 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/22 16:05:16 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(lst == NULL || lst->next == NULL)
		return (NULL)
	while (lst != NULL)
	{
		if(lst->next->next == NULL)
			return lst->content;
		lst = lst->next;
	}
}
