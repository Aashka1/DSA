#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
      data=x;
      next=nullptr;
    }
};
Node *insert(Node *head,int x){
    Node* t=new Node(x);
    
    t->next=head;
    return t;
}
Node *deletefirst(Node *head) {
    if (head == nullptr) {
        return nullptr; // List is empty, nothing to delete
    }
    
    Node *temp = head;
    head = head->next; // Update the head to the next node
    delete temp; // Delete the old head node
    return head; // Return the new head
}

Node *display(Node *head) {
    Node* t = head;
    while (t != nullptr) {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << "null" << endl;
}
int main(){
    Node* head=nullptr;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        head=insert(head,x);
    }
    display(head);
}