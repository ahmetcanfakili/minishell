/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:09:47 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 18:09:50 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

int	echo_builtin(char **exec)
{
	int	i;

	i = 1;
	while (strcmp_eq(exec[i], "-n"))
		i++;
	while (exec[i] != NULL)
	{
		printf("%s", exec[i]);
		if (exec[i + 1] != NULL)
			printf(" ");
		i++;
	}
	if (!strcmp_eq(exec[1], "-n"))
		printf("\n");
	return (0);
}
