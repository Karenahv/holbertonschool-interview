#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_palindrome - checks if a singly linked list is palindrome
 * @head: head of the linked  list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int i = 0, j = 0;
	int array[1000000];

	temp = *head;
	if (temp == NULL)
		return (1);
	while (temp != NULL)
	{
		array[i] = temp->n;
		temp = temp->next;
		i = i + 1;
	}
	for (j = 0; j < i ; j++)
	{
		if (array[j] != array[i - 1 - j])
			return (0);
	}
	return (1);
}
