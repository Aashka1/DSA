#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=nullptr;
    }
};
Node *insertend(Node *head,int x){
    Node* t=new Node(x);
    if (head==nullptr){
        return t;
    }
    Node *cu=head;
    while(cu->next!=t){
        cu=cu->next;
    }
    cu->next=t;
    
return head;
}
int main(){
Node* head=nullptr;
int n;
for (int i=0;i<5;i++){
    cin>>n;
    insertend(head,n);
}
return 0;
}