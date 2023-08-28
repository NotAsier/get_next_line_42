/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:27:59 by aarranz-          #+#    #+#             */
/*   Updated: 2023/08/28 12:34:46 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	if (dstsize == 0)
	{
		return (j);
	}
	i = 0;
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	size_t	len;
	size_t	i;
	size_t	k;

	if (!s1 || !s2)
		return (NULL);
	k = 0;
	i = (ft_strlen(s1));
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str1 = malloc(sizeof(char) * (len));
	if (str1 == NULL || (str1 == NULL && s2 == NULL))
		return (NULL);
	ft_strlcpy(str1, s1, len);
	while (i <= len && s2[k])
	{
		str1[i] = s2[k];
		i++;
		k++;
	}
	str1[i] = '\0';
	return (str1);
}