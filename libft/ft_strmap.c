/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonnie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:38:44 by pdonnie           #+#    #+#             */
/*   Updated: 2019/04/10 13:39:47 by pdonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char		*str;
	size_t		index;

	if (!s || !f)
		return (NULL);
	index = ft_strlen(s);
	if ((index + 1) < index)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (index + 1));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		str[index] = f(s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
