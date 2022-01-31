/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:13:31 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/12/07 18:08:41 by saritasul        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*s2;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (i <= len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
