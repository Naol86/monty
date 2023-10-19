#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: count
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (run.arg)
	{
		if (run.arg[0] == '-')
			j++;
		for (; run.arg[j] != '\0'; j++)
		{
			if (run.arg[j] > 57 || run.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(run.file);
			free(run.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(run.file);
		free(run.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(run.arg);
	if (run.flag == 0)
		addNode(head, n);
	else
		addQueue(head, n);
}
