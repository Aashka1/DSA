// A complete working C++ program to demonstrate 
// Doubly Linked Lists

#include <bits/stdc++.h> 
using namespace std;

// A linked list node 
struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
}; 

// This function prints contents of Doubly linked 
// list starting from the given node 
void printList(struct Node* node) 
{ 
    struct Node* last; 

    // Traverse the linked list in forward direction
    // using the next node's pointer present 
    // at each node
    cout<<"\nTraversal in forward direction \n"; 
    while (node != NULL) { 
        cout<<node->data<<" "; 
        last = node; 
        node = node->next; 
    } 

    // Traverse the linked list in reverse direction 
    // starting from the last node using the previous
    // node's pointer present at each node
    printf("\nTraversal in reverse direction \n"); 
    while (last != NULL) { 
        cout<<last->data<<" "; 
        last = last->prev; 
    } 
} 

/* Given a reference (pointer to pointer) to the head 
   of a DLL and an int, this function inserts 
   a new node at the end */
void append(struct Node** head_ref, int new_data) 
{ 
    /* 1. allocate node */
    Node* new_node = new Node; 

    struct Node* last = *head_ref; /* used in step 5*/

    /* 2. put in the data */
    new_node->data = new_data; 

    /* 3. This new node is going to be the last node, so 
        make next of it as NULL*/
    new_node->next = NULL; 

    /* 4. If the Linked List is empty, then make the new 
        node as head */
    if (*head_ref == NULL) { 
        new_node->prev = NULL; 
        *head_ref = new_node; 
        return; 
    } 

    /* 5. Else traverse till the last node */
    while (last->next != NULL) 
        last = last->next; 

    /* 6. Change the next of last node */
    last->next = new_node; 

    /* 7. Make last node as previous of new node */
    new_node->prev = last; 

    return; 
} 

/* Driver program to test above functions*/
int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 

    // Insert 6. So linked list becomes 6->NULL 
    append(&head, 6); 

    // Insert 7 at the end. 
    // So linked list becomes 6->7->NULL 
    append(&head, 7); 

    // Insert 1 at the end. 
    // So linked list becomes 6->7->1->NULL
    append(&head, 1); 

    // Insert 4 at the end. 
    // So linked list becomes 6->7->1->4->NULL
    append(&head, 4); 

    cout<<"Created DLL is: "; 
    printList(head); 

    return 0; 
} 