#include <iostream>
using namespace std;
//insert at the beginnig
struct Node {
    int data;
    Node* next;
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
int main(){
    Node* head =nullptr;
    int n;
    for (int i=0;i<5;i++)
{cin>>n;
head=insert(head,n);

}    return 0;
}