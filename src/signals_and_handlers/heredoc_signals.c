/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc_signals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:12:32 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 18:12:34 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

static void	heredoc_signal_handler(int signal);

void	heredoc_parent_signal(void)
{
	signal(SIGQUIT, SIG_IGN);
	signal(SIGINT, SIG_IGN);
}

void	heredoc_child_signal(void)
{
	signal(SIGQUIT, SIG_IGN);
	signal(SIGINT, heredoc_signal_handler);
}

static void	heredoc_signal_handler(int signal)
{
	(void)signal;
	ft_putstr_fd("\n", 2);
	free_minishell();
	exit(130);
}
