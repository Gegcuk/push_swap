/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:11:42 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/11 19:23:52 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	push(t_node	**node_list, int number)
{
	t_node	*new_node;

	new_node = (t_node *)malloc (sizeof(t_node));
	new_node->data = number;
	new_node->next = (*node_list);
	new_node->prev = NULL;
	if (*node_list != NULL)
	{
		(*node_list)->prev = new_node;
	}
	(*node_list) = new_node;
}
