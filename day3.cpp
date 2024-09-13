#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printl(Node *head){
    Node *curee=head;
    while(curee!=NULL ){
        cout<<curee->data<<" " ;
        curee=curee->next;
    }
}
int main(){
   Node *head=new Node(10);
   Node *temp=new Node(20);
   Node *h=new Node(30);
   head->next=temp;
   temp->next=h;
   printl(head);
   return 0;
}
