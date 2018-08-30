/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:50:03 by psambo            #+#    #+#             */
/*   Updated: 2018/07/12 14:54:49 by psambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrnew(size_t size)
{
	char **ret;

	if (!(ret = (char **)malloc(sizeof(*ret) * size + 1)))
		return (NULL);
	ret[size + 1] = 0;
	while (size)
		ret[size--] = NULL;
	return (ret);
}
