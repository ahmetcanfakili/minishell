/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_assigment.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:10:49 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 18:10:52 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

t_cmd	*init_command(int id)
{
	t_cmd	*cmd;

	cmd = malloc(sizeof(t_cmd));
	if (!cmd)
	{
		free_minishell();
		exit(12);
	}
	cmd->id = id;
	cmd->commands = NULL;
	cmd->redirections = NULL;
	cmd->endpoint = -1;
	cmd->is_piped = 0;
	cmd->exec = NULL;
	cmd->exec_path = NULL;
	cmd->envp = NULL;
	cmd->fd_in = -2;
	cmd->fd_out = -2;
	cmd->s_quotes = 0;
	cmd->d_quotes = 0;
	cmd->argc = 0;
	cmd->next = NULL;
	return (cmd);
}

void	command_add_back(t_cmd *command)
{
	t_cmd	*command_root;

	command_root = g_minishell.command;
	if (!command_root)
		g_minishell.command = command;
	else
	{
		while (command_root->next)
			command_root = command_root->next;
		command_root->next = command;
	}
}