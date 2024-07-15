/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:25:55 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 18:13:41 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"
#include <stdio.h>
#include <stdlib.h>

void	free_stack(t_node *head);

int	main(int argc, char **argv)
{
	t_node *a = NULL;
	t_node *b = NULL;
	int i;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <list of integers>\n", argv[0]);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int value = atoi(argv[i]);
		push(&a, value);
		push(&b, value);
	}

	printf("Initial stack a: ");
	printstack(a);
	printf("Initial stack b: ");
	printstack(b);

	// Perform and print results of each operation
	printf("Performing sa (swap top two elements of a)\n");
	sa(&a);
	printstack(a);

	printf("Performing sb (swap top two elements of b)\n");
	sb(&b);
	printstack(b);

	printf("Performing ss (swap top two elements of both a and b)\n");
	ss(&a, &b);
	printstack(a);
	printstack(b);

	printf("Performing pb (push top element of a to b)\n");
	pb(&a, &b);
	printstack(a);
	printstack(b);

	printf("Performing pa (push top element of b to a)\n");
	pa(&a, &b);
	printstack(a);
	printstack(b);

	printf("Performing ra (rotate stack a up by one)\n");
	ra(&a);
	printstack(a);

	printf("Performing rb (rotate stack b up by one)\n");
	rb(&b);
	printstack(b);

	printf("Performing rr (rotate both stacks up by one)\n");
	rr(&a, &b);
	printstack(a);
	printstack(b);

	printf("Performing rra (reverse rotate stack a down by one)\n");
	rra(&a);
	printstack(a);

	printf("Performing rrb (reverse rotate stack b down by one)\n");
	rrb(&b);
	printstack(b);

	printf("Performing rrr (reverse rotate both stacks down by one)\n");
	rrr(&a, &b);
	printstack(a);
	printstack(b);

	freestack(a);
	freestack(b);

	return (0);
}