#include <iostream>
//doubly linked list
using namespace std;
struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=nullptr;
        prev=nullptr;
    }
};
int main(){
   Node *head=new Node(10);
   Node *temp=new Node(10);
   Node *h=new Node(10);
   temp->next=h;
   h->prev=temp;
   temp->prev=head;
   head->next=temp;
}