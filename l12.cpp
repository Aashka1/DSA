#include <iostream>
using namespace std;
struct Node{
int dat ;
Node *prev;
Node *next;
Node(int dara)
{
    dat=dara;
    next=prev=NULL;
}
};
// for insertion from beginning
// Node *insert(Node *head,int d){
//     Node *temp =new Node(d);
//     temp->next=head;
//     if (head!=NULL){;
//         head->prev=temp;
//     }
//     return temp;
// }
Node *last(Node *head, int d){
    Node *temp = new Node(d);

    if (head == NULL) {
        return temp;
    }

    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = temp;
    temp->prev = current;

    return head;
}
