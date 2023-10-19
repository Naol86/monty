#include "monty.h"
/**
 * f_queue - print head of queue
 * @head: head of list
 * @counter: no line
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	run.flag = 1;
}

/**
 * addQueue - add node at the end of the queue
 * @n: new value
 * @head: head of list
*/
void addQueue(stack_t **head, int n)
{
	stack_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		printf("Error\n");

	new_node->n = n;
	new_node->next = NULL;
	if (current)
	{
		while (current->next)
			current = current->next;
	}
	if (!current)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		current->next = new_node;
		new_node->prev = current;
	}
}
