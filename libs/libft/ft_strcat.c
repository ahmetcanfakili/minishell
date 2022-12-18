/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:30:23 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 17:30:26 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	size_t	i;
	size_t	len;
	char	*result;

	len = (ft_strlen(s1) + ft_strlen(s2));
	result = (char *)malloc(sizeof(char *) * (len + 1));
	i = 0;
	while (*s1)
	{
		result[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		result[i] = *s2;
		s2++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
