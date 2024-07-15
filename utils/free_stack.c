/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:26:59 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 17:25:07 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	free_stack(t_node *head)
{
	t_node	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
