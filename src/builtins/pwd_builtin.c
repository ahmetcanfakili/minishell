/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd_builtin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:10:10 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 18:10:12 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

static char	*get_pwd(void);

int	pwd_builtin(void)
{
	char	*pwd;

	pwd = get_pwd();
	if (!pwd)
	{
		free(pwd);
		pwd = search_env_value("PWD");
		printf("%s\n", pwd);
	}
	else
		printf("%s\n", pwd);
	free(pwd);
	return (0);
}

static char	*get_pwd(void)
{
	char	*buffer;

	buffer = NULL;
	return (getcwd(buffer, 4096));
}
