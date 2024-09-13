//  transversing a singly linked list in c++
#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printlist(head);
	return 0;
} 
// A simple C/C++ program to introduce 
// a linked list 

// #include<bits/stdc++.h>
// using namespace std;

// Linked List Node
// struct Node 
// { 
//     int data; // Data
//     struct Node *next;  // Pointer
// }; 

// This function prints contents of linked list 
// starting from  the given node 
// void printList(Node *node) 
// { 
//     while (node != NULL) 
//     { 
//         cout<<node->data<<" "; 
//         node = node->next; 
//     } 
// } 

// int main() 
// { 
//     struct Node* head = NULL; 
//     struct Node* second = NULL; 
//     struct Node* third = NULL; 
        
//     // allocate 3 nodes in the heap 
//     head = new Node; 
//     second = new Node; 
//     third = new Node; 
    
    /* Three blocks have been allocated dynamically. 
        We have pointers to these three blocks as first, 
        second and third     
        head         second         third 
            |             |             | 
            |             |             | 
        +---+-----+     +----+----+     +----+----+ 
        | # | # |     | # | # |     | # | # | 
        +---+-----+     +----+----+     +----+----+ 
        
    # represents any random value. 
      
      Data is random because we haven’t assigned 
      anything yet */
        
    // head->data = 1; //assign data in first node 
    
    // Link first node with the second node
    // head->next = second;  
        
    /*  data has been assigned to data part of first 
        block (block pointed by head). And next 
        pointer of first block points to second. 
        So they both are linked. 
    
        head         second         third 
            |             |             | 
            |             |             | 
        +---+---+     +----+----+     +-----+----+ 
        | 1 | o----->| # | # |     | # | # | 
        +---+---+     +----+----+     +-----+----+     
    */
        
    // assign data to second node 
    // second->data = 2; 
    
    // Link second node with the third node 
    // second->next = third; 
        
    /*  data has been assigned to data part of second 
        block (block pointed by second). And next 
        pointer of the second block points to third 
        block. So all three blocks are linked. 
        
        head         second         third 
            |             |             | 
            |             |             | 
        +---+---+     +---+---+     +----+----+ 
        | 1 | o----->| 2 | o-----> | # | # | 
        +---+---+     +---+---+     +----+----+     */    
        
    // third->data = 3; //assign data to third node 
    // third->next = NULL; 
        
    /*  data has been assigned to data part of third 
        block (block pointed by third). And next pointer 
        of the third block is made NULL to indicate 
        that the linked list is terminated here. 
    
        We have the linked list ready. 
    
            head     
                | 
                | 
            +---+---+     +---+---+     +----+------+ 
            | 1 | o----->| 2 | o-----> | 3 | NULL | 
            +---+---+     +---+---+     +----+------+     
        
        
        Note that only head is sufficient to represent 
        the whole list. We can traverse the complete 
        list by following next pointers. */
        
    // Print the linked list
//     printList(head);
    
//     return 0; 
// } 