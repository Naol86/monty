#include "monty.h"
/**
 * addNode - add new node in the stack
 * @head: stack head
 * @n: new value
*/
void addNode(stack_t **head, int n)
{

	stack_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (current)
		current->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
