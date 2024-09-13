#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        next=prev=nullptr;
    }
};
Node* insert(int data, Node* head) {
    Node* t = new Node(data);
    Node* c = head;
    if (head == nullptr) {
        head = t;
    } else {
        while (c->next != nullptr) {
            c = c->next;
        }
        c->next = t;
    }
    return head;
}
Node *del(int a,Node *head){
    Node *c=head;
    if(a==0){
        c=c->next;
    }
    else{
    for(int i=0;i<a-1;i++){
        c=c->next;
    }
    c->next=c->next->next;
    return head;
}}
void disp(Node* head) {
    Node* t = head;
    while (t != nullptr) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}
int main(){
    Node *head=nullptr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        head=insert(x,head);
        
    }
    int a;
    cin>>a;
    head=del(a,head);
        disp(head);
}