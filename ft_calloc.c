/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctobias <ctobias@student.21.ru>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 00:20:02 by olydden           #+#    #+#             */
/*   Updated: 2020/05/30 16:46:19 by ctobias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;

	s = (unsigned char *)malloc(size * nmemb);
	if (!s)
		return (NULL);
	ft_bzero(s, (nmemb * size));
	return ((void *)s);
}
