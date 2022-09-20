/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:11:03 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/20 15:13:08 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list *bonus;
	
	bonus = (t_list *) malloc(sizeof(t_list *));
	if (!bonus)
		return (NULL);
	bonus->content = content;
	bonus->next = NULL;
	return (bonus);
}	
		
