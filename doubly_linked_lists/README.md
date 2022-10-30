# Doubly Linked list

## Description
Double Linked list are linked list which node contains two pointers,
one points to the previous node and the other one to the next one.

## General requirements for this project:
- Allow editors: vi, vim, emacs.
- Global variables are not allowed.
- The only C standard library functions allowed are malloc, free and
  exit, unless told otherwise.
- No more than 5 functions per file.
- All the prototypes should be include in the header file.
- The header file should be include guarded.
- All the files should be compiled using Ubuntu 20.04 LTS.
- As a compiler method we use the gcc (GNU Compiler Collection) as follow:
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89

## Mandatory task for this project:
- 0. Print list - prints all of the elements in the linked list.
> Prototype used: size_t print_dlistint(const dlisint_t \*h);
- 1. List length - print the amount of nodes in the linked list.
> Prototype used: size_t dlistint_len(const dlistint_t \*h);
- 2. Add node - add a new node at the beggining of the list.
> Prototype used: dlistint_t \*add_dnodeint(dlistint \*\*head, const int n);
- 3. Add node at the end - add a new node at the end of the list.
> Prototype used: dlistint_t \*add_dnodeint_end(dlistint \*\*head, const int n);
- 4. Free list - frees a doubly linked list.
> Protoype used: void free_dlistint(dlistint_t \*head);
- 5. Get a node - return the nth node to the list
> Prototype used: dlistint_t \*get_dnodeint_at_index(dlistint_t \*head, unsigned int index);
- 6. Sum list - sum all the data in the doubly linked list.
> Prototype used: int sum_dlistint(dlistint_t \*head);
- 7. Insert at index - insert a node in a given index.
> Prototype used: dlistint_t \*insert_dnodeint_at_index(dlistint_t \*\*h, unsigned int idx, int n);
- 8. Delete at index - delete a node at a given index.
> Prototype used: int delete_dnodeint_at_index(dlistint \*\*head, unsigned int index);
