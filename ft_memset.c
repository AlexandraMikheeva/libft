/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olydden <olydden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 22:31:42 by olydden           #+#    #+#             */
/*   Updated: 2020/05/29 00:19:36 by olydden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	while (n--)
		*ss++ = cc;
	return (s);
}
