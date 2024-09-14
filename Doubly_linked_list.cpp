#include <iostream>
struct list{
    int data;
    list *prev;
    list *next;
    list(int data){
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;
    }
};
void insert_end(list *head,int d){
    list *temp=new list(d);
    if(head==nullptr){
        head->data=temp->data;
    }
    while(head->next!=nullptr){
        head=head->next;
              
    }
    head->prev=head;
    head->next=temp;
    head=head->next;
}
void insert_begin(list *&head, int d) {
    list *temp = new list(d);

    // If head is null, make temp the head
    if (head == nullptr) {
        head = temp;
        return;
    }

    // Insert temp at the beginning
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void delets(list *&head,int d){
    list *temp=head;
    if(head->data==d){
        head=head->next;
        head->prev=nullptr;
        delete temp;
        return;
    }
    while(temp->next!=nullptr){
        if(temp->data==d){
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete temp;
            return;
        }
        temp=temp->next;
    }
    if(temp->data==d){
        temp->prev->next=nullptr;
        delete temp;
    }
}
void insert_in_middle(list *head, int d, int pos) {
    list *temp = new list(d);
    int count = 1;
    
    
    while (head != nullptr) {
        if (count == pos-1) {
            // Insert the new node at the correct position
            if (head->next != nullptr) {
                head->next->prev = temp;  // Only if next node exists
            }
            temp->next = head->next;
            temp->prev = head;
            head->next = temp;
            return;
        }
        head = head->next;  // Move to the next node
        count++;
    }
}

void print(list *head){
    while(head!=nullptr){
        std::cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    list *head=new list(1);
    insert_end(head,2);
    insert_end(head,3);
    insert_end(head,4);
    insert_in_middle(head,5,3);
    insert_begin(head,6);
    print(head);
    return 0;
}
