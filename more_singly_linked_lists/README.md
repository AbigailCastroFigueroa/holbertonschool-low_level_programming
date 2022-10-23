# More singly linked lists

## Description
In this project, we are going to be working with singly linked lists
this time the nodes contain only integers. Some of the tasks are
related to the previous project of singly linked list.

## Requirements for the project:
- The editors allowed are: vi, vim or emacs.
- Global variables are not allowed.
- No more than 5 functions per file.
- The only C standard functions allowed are malloc, free and exit.
  (Unless we are told otherwise).
- All the files should be compiled using Ubuntu 20.04 LTS.
- As compilation method we use the gcc (GNU Compiler Collection) as follow:
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89

### Mandatory tasks for this project:
- Task 0.Print list - function that prints all the elements in a linked list.
> prototype used: size_t print_listint(const listint_t \*h);
- Task 1.List length - function that return the amount of elements in a linked
  list.
> prototype used: size_t listint_len(const listint_t \*h);
- Task 2.Add node - function that adds a new node at the beggining of the list.
> prototype used: listint_t \*add_nodeint(listint_t \*\*head, const int n);
- Task 3.Add node at the end - function that add a new node at the end of the list.
> prototype used: listint_t \*add_nodeint_end(listint_t \*\*head, const int n);
- Task 4.Free list - function that frees a linked list.
> prototype used: void free_listint(listint_t \*head);
- Task 5.Free - function that frees a list.
> prototype used: void free_listint2(listint_t \*\*head);
- Task 6.Pop - function that deletes the head node of a list, and return the head
  node's data (n).
> prototype used: int pop_listint(listint_t \*\*head);
- Task 7.Get node at index - function that return the nth node of a linked list.
> prototype used: listint_t \*get_nodeint_at_index(listint_t \*head, unsigned int index);
- Task 8. Sum list - function that returns the sum of all the data (n) of a linked list.
> prototype used: int sum_listint(listint_t \*head);
- Task 9.Insert -function taht inserts a new node at a given position.
> prototype used: listint-t \*insert_nodeint_at_index(listint_t \*\*head, unsigned int idx, int n);
- Task 10.Delete at index - function that deletes the node at index 'index' of a linked list.

