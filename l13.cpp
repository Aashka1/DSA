// reversing a doubly linked list
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
     data=x;
     next=nullptr;
     prev=nullptr;
    }
};
Node *reverseList(Node *head){
Node *c=head;
Node *t=nullptr;
while(c->next!=nullptr){
    t=c->next;
    c->next=c->prev;
    c->prev=t;
    
}
return c;
}
Node *insert(Node *head,int x){
    Node* t=new Node(x);
    t->next=head;
    return t;
}
// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}
int main(){
    Node *head=nullptr;
    insert(head,20);
    insert(head,96);
    displayList(reverseList(head));
}