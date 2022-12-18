/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_loop_signals.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:12:36 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 18:12:38 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

static void	shell_loop_handler(int signal);

void	shell_loop_signal(void)
{
	signal(SIGINT, shell_loop_handler);
	signal(SIGQUIT, SIG_IGN);
}

static void	shell_loop_handler(int signal)
{
	(void)signal;
	printf("\n");
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
}
