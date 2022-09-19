/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:05:53 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/16 12:37:07 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	ovflow;

	ovflow = nmemb * size;
	result = (void *) malloc (nmemb * size);
	if (ovflow / nmemb != size || ovflow / size != nmemb || (!result))
		return (NULL);
	ft_bzero (result, ovflow);
	return (result);
}
