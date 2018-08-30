/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:16:37 by psambo            #+#    #+#             */
/*   Updated: 2018/05/31 16:40:11 by psambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dst2;

	src2 = (char *)src;
	dst2 = (char *)dst;
	if (src2 < dst2)
		while ((int)--len >= 0)
			dst2[len] = src2[len];
	else
		ft_memcpy(dst2, src2, len);
	return (dst2);
}
