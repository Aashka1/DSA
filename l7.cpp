#include <iostream>
using namespace std;
struct Node {
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
Node *insertpos(Node *head,int pos,int data){
Node* temp=new Node(data);
if (pos==1){
    temp->next=head;
    return temp;
}
Node *curr=head;
for(int i=0;i<pos-2;i++){
    curr=curr->next;
}
temp->next=curr->next;
curr->next=temp;
return curr;
}
int main(){
 Node* head =nullptr;
    int n;
    for (int i=0;i<5;i++)
{cin>>n;
head=insert(head,n);

}  
insertpos(head,3,6);
  return 0;
}