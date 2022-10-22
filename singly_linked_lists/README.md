# Singly linked list

### Description
In this project we are going to learn what are singly linked list, and how to use them performing simple tasks. 

#### General requirements

- We are only allowed to use vi, vim or emacs as text editors.
- The use of global variables it's not allowed.
- The header file must be include guarded.
- The header file should have all the prototypes given.
- The only C standard library functions allowed are malloc, free and exit.
- No more than 5 functions per file

#### Compilation
As compilation method we use gcc using given flags as follow, including at the end the .c files:
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89

#### Mandatory tasks
- Task 0 - we create a function that prints all the elements in the linked list along with it's content.
--prototype used to perform this task: size_t print_list(const list_t \*h);
- Task 1 - create a function that only prints the amount of elements.
--prototype used to perform this task: size_t list_len(const list_t \*h);
- Task 2 - write a function that add a node at the beggining of the list.
--prototype used to perform this task: list_t \*add_node(const \*\*head, const char \*str);
- Task 3 - write a function that add a node at the end of the list.
--prototype used to perform this task: list_t \*add_node_end(const \*\*head, const char \*str);
- Task 4 - write a function that frees the list.
--prototype used to perform this task: void free_list(list_t \*head);

#### Advanced task
- Task 5 - write a function that prints before main is executed.
--prototype used to perform this task: void before_main()__attribute__((constructor));

##### Resources used for this project:
- https://geeksforgeeks.org/data-structures/
- https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm
- Jenny's lectures (https://youtu.be/dmb1i4oN5oE)
