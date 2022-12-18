/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_lexer_and_parser.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:11:48 by afakili           #+#    #+#             */
/*   Updated: 2022/12/18 18:11:50 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

void	free_tokens(t_token **tokens)
{
	t_token	*token;
	t_token	*temp;

	token = *tokens;
	while (token)
	{
		temp = token;
		token = token->next;
		free(temp->token_value);
		free(temp);
	}
	*tokens = NULL;
}

void	free_parser(void)
{
	if (!g_minishell.parser)
		return ;
	if (g_minishell.parser->input)
		free(g_minishell.parser->input);
	if (g_minishell.parser->tokens)
		free_tokens(&g_minishell.parser->tokens);
	free(g_minishell.parser);
	g_minishell.parser = NULL;
}
