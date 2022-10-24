C - More singly linked lists
In this project, I continued to practice building and using singly linked lists in C.

Tests ✔️
tests: Folder of test files. Provided by Holberton School.
Header File 📁
lists.h: Header file containing definitions and prototypes for all types and functions written for the project.
Type/File	Definition/Prototype
struct listints	
int n
struct listints *next
typedef listint_t	struct listint_s
0-print_listint.c	size_t print_listint(const listint_t *h);
1-listint len.c	sizet listint len(const listint *h);
2-add_nodeint.c	listint_t *add nodeint(listint **head, const int n);
3-add_nodeint_end.c	listint_t *add_nodeint_end(listint_t **head, const int n);
4-free listint.c	void free listint(listint *head);
5-free_listint2.c	void free_listint2(listint_t **head);
6-pop_listint.c	int pop_listint(listint_t **head);
7-get_nodeint.c	listint_t *get nodeint at index(listint *head, unsigned int index);
8-sum_listint.c	int sum_listint(listint_t *head);
9-insert nodeint.c	listint *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
10-delete_nodeint.c	int delete_nodeint_at_index(listint_t **head, unsigned int index);
100-reverse_listint.c	listint_t *reverse listint(listint **head);
101-print_listint_safe.c	size_t print_listint_safe(const listint_t *head);
102-free_listint_safe.c	size_t free_listint_safe(listint_t **h);
103-find loop.c	listint *find_listint_loop(listint_t *head);
Tasks 📃
0. Print list

0-print listint.c: C function that prints all the elements of a listint linked list.
Returns the number of nodes in the listint list.
1. List length

1-listint len.c: C function that returns the number of elements in a listint linked list.
2. Add node

2-add nodeint.c: C function that adds a new node at the beginning of a listint linked list.
If the function fails - returns NULL.
Otherwise - returns the address of the new element.
3. Add node at the end

3-add nodeint end.c: C function that adds a new node at the end of a listint linked list.
If the function fails - returns NULL.
Otherwise - returns the address of the new element.
4. Free list

4-free listint.c: C function that frees a listit linked list.
5. Free

5-free listint2.c: C function that frees a listint linked list.
Sets the head to NULL.
6. Pop

6-pop listint.c: C function that deletes the head node of a listint linked list.
If the linked list is empty - returns 0.
Otherwise - returns the head node's data (n).
7. Get node at index

7-get nodeint.c: C function that locates a given node of a listint linked list.
If the node does not exist - returns NULL.
Otherwise - returns the located node.
8. Sum list

8-sum listint.c: C function that returns the sum of all the data (n) of a listint linked list.
If the linked list is empty - returns 0.
Otherwise - returns the sum of all the data (n).
9. Insert

9-insert nodeint.c: C function that inserts a new node to a listint linked list at a given position.
If it is not possible to add the new node at index idx, or the function fails - returns NULL.
Otherwise - returns the address of the new node.
10. Delete at index

10-delete nodeint.c: C function that deletes the node at a given index of a listint linked list.
If the function succeeds - returns 1.
If the function fails - returns -1.
11. Reverse list

100-reverse listint.c: C function that reverses a listint linked list using a maximum of one loop and two variables.
Returns a pointer to the first node of the reversed list.
12. Print (safe version)

101-print listint safe.c: C function that prints a listint linked list safely (ie. can free lists containing loops).
Returns the number of nodes in the listint list.
13. Free (safe version)

102-free listint safe.c: C function that frees a listint linked list safely (ie. can free lists containing loops).
Returns the size of the list that was freed.
Sets the head to NULL.
14. Find the loop

103-find loop.c: C function that finds the loop contained in a listint linked list using a maximum of two variables.
If no loop is found - returns NULL.
Otherwise - returns the address of the node where the loop starts.
