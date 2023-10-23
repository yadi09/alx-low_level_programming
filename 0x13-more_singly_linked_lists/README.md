     ###Introduction###

This file contains the implementation of a single linked list data structure. A single linked list is a linear data structure that stores a sequence of elements. Each element in the list contains a value and a pointer to the next element in the list.



   ***Task 0***
- Write a function that prints all the elements of a listint_t list.

. Prototype: size_t print_listint(const listint_t *h);
. Return: the number of nodes
. Format: see example
. You are allowed to use printf


The function named `print_listint` that prints the elements of a linked list of integers and returns the number of nodes in the list. Here's a breakdown of how the code works:

1. The function `print_listint` takes a single parameter `h`, which is a pointer to the head of the linked list (`listint_t` is assumed to be a struct representing a node in the linked list).

2. The variable `num_of_nodes` is initialized to 0. This variable will keep track of the number of nodes in the linked list.

3. The code enters a while loop that continues as long as the current node `h` is not NULL, indicating that there are more nodes to process.

4. Inside the loop, the code prints the value of the current node's data (`h->n`) using the `printf` function with the format specifier `%d`.

5. The code updates the value of `h` to point to the next node in the linked list (`h = h->next`), effectively traversing the list.

6. After printing the current node and updating the pointer, the variable `num_of_nodes` is incremented by 1 to account for the processed node.

7. Once the loop ends, all nodes in the linked list have been printed, and the total number of nodes is stored in `num_of_nodes`.

8. The function returns the value of `num_of_nodes`, indicating the number of nodes in the linked list.

This function can be used to print the elements of a linked list of integers and determine the number of nodes in the list.



   ***Task 1***
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

The function named `listint_len` that calculates the number of elements (nodes) in a linked list. Here's a breakdown of how the code works:

1. The function `listint_len` takes a single parameter `h`, which is a pointer to the head of the linked list (`listint_t` is assumed to be a struct representing a node in the linked list).

2. The variable `num_of_elemrnt` is initialized to 0. This variable will keep track of the number of elements (nodes) in the linked list.

3. The code enters a while loop that continues as long as the current node `h` is not NULL, indicating that there are more nodes to process.

4. Inside the loop, the code updates the value of `h` to point to the next node in the linked list (`h = h->next`), effectively traversing the list.

5. The variable `num_of_elemrnt` is incremented by 1 to count the current node as an element in the linked list.

6. Once the loop ends, all nodes in the linked list have been traversed, and the total number of elements is stored in `num_of_elemrnt`.

7. The function returns the value of `num_of_elemrnt`, which represents the number of elements (nodes) in the linked list.

This function can be used to determine the number of elements in a linked list.


   ***Task 2***
Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

The function named `add_nodeint` that adds a new node at the beginning of a linked list of integers. Here's a breakdown of how the code works:

1. The function `add_nodeint` takes two parameters: `**head`, a pointer to a pointer to the head of the linked list, and `n`, the value to be assigned to the new node.

2. Inside the function, a new node is created using `malloc` to allocate memory for the `listint_t` struct. The `sizeof(listint_t)` is used to determine the size of the struct.

3. The value `n` is assigned to the `n` member of the new node, representing the data stored in the node.

4. The `next` member of the new node is set to the current head of the linked list, making the new node the new head.

5. The pointer `*head` is updated to point to the new node, effectively updating the head of the linked list to the new node.

6. Finally, the function returns the pointer to the new node.

This function can be used to add a new node with a specified value at the beginning of a linked list of integers, updating the head pointer accordingly.



   ***Task 3***
Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

The function named `add_nodeint_end` that adds a new node at the end of a linked list of integers. Here's a breakdown of how the code works:

1. The function `add_nodeint_end` takes two parameters: `**head`, a pointer to a pointer to the head of the linked list, and `n`, the value to be assigned to the new node.

2. A temporary pointer `temp` is created and assigned the value of `*head`, which points to the head of the linked list. This pointer will be used to traverse the list.

3. A new node is created using `malloc` to allocate memory for the `listint_t` struct. The `sizeof(listint_t)` is used to determine the size of the struct.

4. The code checks if the memory allocation was successful by verifying if `newnode` is `NULL`. If it is, indicating a failed allocation, the function returns `NULL` to indicate the failure.

5. If the memory allocation was successful, the value `n` is assigned to the `n` member of the new node, representing the data stored in the node.

6. The `next` member of the new node is set to `NULL`, as it will be the last node in the list.

7. The code then checks if the current list is empty by verifying if `*head` is `NULL`. If it is, indicating an empty list, the `*head` pointer is updated to point to the new node, making it the new head of the list.

8. If the list is not empty, the code enters a loop to find the last node in the list. The loop continues as long as `temp->next` is not `NULL`, indicating there are more nodes to traverse.

9. Inside the loop, `temp` is updated to point to the next node in the list, effectively traversing the list.

10. Once the loop ends, `temp` points to the last node in the list. The `next` member of `temp` is updated to point to the new node, making it the new last node.

11. Finally, the function returns the pointer to the new node.

This function can be used to add a new node with a specified value at the end of a linked list of integers, updating the appropriate pointers accordingly.


   ***Task 4***
Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

The function named `free_listint` that frees the memory allocated for a linked list of integers. Here's a breakdown of how the code works:

1. The function `free_listint` takes a single parameter `head`, which is a pointer to the head of the linked list (`listint_t` is assumed to be a struct representing a node in the linked list).

2. Inside the function, a temporary pointer `temp` is declared to keep track of the next node while freeing the current node.

3. The code enters a while loop that continues as long as the current node `head` is not NULL, indicating that there are more nodes to process.

4. Inside the loop, the code assigns the value of `head->next` to `temp` to store the pointer to the next node.

5. The `free` function is called to deallocate the memory of the current node (`free(head)`).

6. The `head` pointer is updated to point to the next node (`head = temp`), effectively moving to the next node in the list.

7. Steps 4-6 are repeated until all nodes in the linked list have been freed.

8. Once the loop ends, all nodes in the linked list have been freed, and the memory is released.

This function can be used to free the memory allocated for a linked list of integers, preventing memory leaks.


   ***Task 5***
Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

The function named `free_listint2` that frees the memory allocated for a linked list of integers and sets the head pointer to `NULL`. Here's a breakdown of how the code works:

1. The function `free_listint2` takes a single parameter `head`, which is a pointer to a pointer to the head of the linked list (`listint_t` is assumed to be a struct representing a node in the linked list).

2. Inside the function, a temporary pointer `temp` is declared to keep track of the next node while freeing the current node.

3. The code enters a while loop that continues as long as the pointer `*head` is not NULL, indicating that there are more nodes to process.

4. Inside the loop, the code assigns the value of `(*head)->next` to `temp` to store the pointer to the next node.

5. The `free` function is called to deallocate the memory of the current node (`free(*head)`).

6. The `*head` pointer is updated to point to the next node (`*head = temp`), effectively moving to the next node in the list.

7. Steps 4-6 are repeated until all nodes in the linked list have been freed.

8. Once the loop ends, all nodes in the linked list have been freed, and the memory is released.

9. Finally, after freeing all the nodes, the function sets the external head pointer (`**head`) to `NULL`, indicating that the list is now empty.

This function can be used to free the memory allocated for a linked list of integers, while also ensuring that the head pointer is properly updated to `NULL` after freeing all the nodes.



   ***Task 6***
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0


The function named `pop_listint` that removes the head node from a linked list of integers and returns its value. Here's a breakdown of how the code works:

1. The function `pop_listint` takes a single parameter `head`, which is a pointer to a pointer to the head of the linked list (`listint_t` is assumed to be a struct representing a node in the linked list).

2. A temporary pointer `temp` is created and assigned the value of `*head`, which points to the head of the linked list. This pointer will be used to free the memory of the head node later.

3. An integer variable `te_mp` is created and assigned the value of `(*head)->n`, which represents the data stored in the head node.

4. The code checks if the list is empty by verifying if `*head` is `NULL`. If it is, indicating an empty list, the function returns 0 to indicate the failure of popping an element.

5. If the list is not empty, the head pointer (`*head`) is updated to point to the next node in the list, effectively removing the current head node.

6. The memory of the previous head node, pointed to by `temp`, is freed using the `free` function.

7. Finally, the function returns the value stored in `te_mp`, which represents the data of the popped head node.

This function can be used to remove the head node from a linked list of integers, freeing its memory and returning its value.




   **Conclusion**

The single linked list is a versatile data structure that can be used to implement a variety of algorithms and applications. The implementation in this file is simple and efficient, and it provides a comprehensive API for managing single linked lists.