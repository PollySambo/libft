/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:56:39 by psambo            #+#    #+#             */
/*   Updated: 2018/07/12 15:04:13 by psambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	**ft_arrmap(char **arr, char*(*f)(char *))
{
	int		i;
	char	**ret;

	if (!arr || !f)
		return (NULL);
	ret = ft_arrnew((size_t)ft_arrsize(arr))
}
