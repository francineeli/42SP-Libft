/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:05:53 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/15 16:38:49 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void *ft_calloc(size_t nmemb, size_t size)
{
	void *result;
	size_t ovflow;
	
	ovflow = nmemb * size;
	if ((nmemb / ovflow != size) || (size / ovflow != nmemb))
		return (NULL);
	result = malloc (nmemb * size);
	{
		if (!result)
		return (NULL);
	}
		ft_bzero (result, nmemb * size);
		return (result);			
}
