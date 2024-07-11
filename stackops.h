#ifndef STACKOPS_H
#define STACKOPS_H

#include <stddef.h>

typedef struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
} Node;


void sa(Node** a);
void sb(Node** b);
void ss(Node** a, Node** b);
void pa(Node** a, Node** b);
void pb(Node** a, Node** b);
void ra(Node** a);
void rb(Node** b);
void rr(Node** a, Node** b);
void rra(Node** a);
void rrb(Node** b);
void rrr(Node** a, Node** b);

void push(Node** head, int new_data);
void printStack(Node* node);

#endif

