Introduction

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


   **Conclusion**

The single linked list is a versatile data structure that can be used to implement a variety of algorithms and applications. The implementation in this file is simple and efficient, and it provides a comprehensive API for managing single linked lists.