/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonnie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:17:50 by pdonnie           #+#    #+#             */
/*   Updated: 2019/04/10 17:14:45 by pdonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	index;

	str = (char *)malloc(sizeof(char) * size);
	if (str == 0)
		return (NULL);
	index = 0;
	while (index < size)
	{
		str[index] = '\0';
		index++;
	}
	return (void *)(str);
}
