/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:16:53 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 15:55:47 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"
#include <stdio.h>

void	printstack(t_node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}
