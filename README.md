# LINKED-LIST-IMPLEMENTATION-
 COMPANY: CODTECH IT SOLUTIONS PVT.LTD
 *NAME: RAJARYAN 
 INTERN ID: CT04DZ227
 DOMAIN: C LANGUAGE
 DURATION: 4 WEEKS 
 MENTOR: NEELA SANTOSH KUMAR

In Task 2, the primary objective was to implement a Singly Linked List in the C programming language with support for three fundamental operations: insertion, deletion, and traversal. This task provides practical experience with dynamic data structures and highlights the importance of memory management using pointers — an essential skill in systems programming and low-level software development.

A singly linked list is a linear data structure where each element (called a node) contains two components: the data (in this case, an integer) and a pointer to the next node. Unlike arrays, linked lists do not require contiguous memory, making them more efficient for applications involving frequent insertions and deletions, such as real-time task queues, dynamic stacks, and symbol tables.

The program begins by defining a struct Element, representing each node in the list. Each node holds an integer value and a pointer to the next node, effectively creating a dynamic chain in memory. This structure supports efficient traversal and manipulation without requiring a fixed size or memory reallocation.

The addNode() function performs the insertion operation. It allocates memory dynamically for a new node using malloc(), assigns the input value, and links it to the end of the current list. If the list is empty, the new node becomes the head. This function ensures that values can be added efficiently, even as the list expands during execution.

The removeNode() function performs the deletion operation. It searches for the node containing the given value and removes it from the list by adjusting the pointer of the preceding node. If the node to be deleted is the head node, the head pointer is updated. The function uses free() to deallocate memory of the removed node, which is critical in C to prevent memory leaks. If the value is not found, a message is displayed, improving user experience and robustness.

The showList() function handles traversal. It iterates through the linked list starting from the head and prints each node’s value until the end is reached. If the list is empty, it informs the user. This functionality allows the user to visualize the list after any operation.

The main() function acts as the program's control unit. It provides a menu-driven interface with four options: add, remove, view, and exit. The user can perform multiple operations in one session through a loop that continues until the exit option is chosen. Inputs are collected using scanf(), and actions are executed based on the user's choice, making the program interactive and user-friendly.

This task is significant because it introduces learners to real-world programming concepts like pointer manipulation, dynamic memory allocation, and safe memory deallocation. Unlike arrays, linked lists rely entirely on pointers, offering flexibility at the cost of added complexity. By engaging with these concepts, students gain hands-on experience in building and maintaining low-level data structures.

Moreover, this program serves as a stepping stone for implementing more advanced structures like doubly linked lists, circular linked lists, and graph representations. It reinforces modular programming, algorithmic thinking, and efficient design — all of which are critical in software engineering roles, particularly in systems and backend development.

In conclusion, the Singly Linked List implementation developed in this task demonstrates a solid grasp of C programming principles, modular design, and dynamic memory management. It provides a vital foundation for any aspiring developer or computer science student looking to master data structures and low-level logic in real-world software systems.

#OUTPUT: 
<img width="1920" height="1020" alt="Image" src="https://github.com/user-attachments/assets/835d3254-2ce5-4b56-918c-2cac496f62a3" />
