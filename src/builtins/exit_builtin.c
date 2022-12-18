/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:09:59 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 18:10:02 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

int	exit_builtin(void)
{
	g_minishell.exit_code = 0;
	free_minishell();
	exit(g_minishell.exit_code);
	return (g_minishell.exit_code);
}
