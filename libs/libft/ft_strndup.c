/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:34:31 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 17:34:33 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, int length)
{
	char	*ret;

	if (!length)
		return (NULL);
	ret = malloc((length + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, str, length);
	ret[length] = '\0';
	return (ret);
}
