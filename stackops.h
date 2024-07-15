/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackops.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:34:52 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 16:27:51 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKOPS_H
# define STACKOPS_H
# include <stddef.h>
# include <stdlib.h>

typedef struct t_node
{
	int				data;
	struct t_node	*next;
	struct t_node	*prev;
}					t_node;
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	push(t_node **head, int new_data);
void	printstack(t_node *node);
void	free_stack(t_node *head);
#endif
