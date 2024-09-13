#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *insert(Node *head,int x){
    Node *t=new Node();
    t->data=x;
    t->next=head;
    return t;
}
Node *deletelast(Node *head) {
    if (head == nullptr) {
        return nullptr; // List is empty, nothing to delete
    }

    if (head->next == nullptr) {
        delete head; // If there's only one node, delete it
        return nullptr; // List is now empty
    }

    Node *temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next; // Delete the last node
    temp->next = nullptr; // Update the second-to-last node's next pointer

    return head;
}

int main(){
    Node* head=nullptr;
    int n;
    for (int i=0;i<5;i++)
{cin>>n;
head=insert(head,n);
}
deletelast(head);
}