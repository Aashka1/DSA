// practise questions on linked list
// Singly linked list
#include<iostream>
using namespace std;
struct list
{
    int data;
    list *next;

    // Constructor
    list(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
void recursive_insertion(list *&head,int data){
    if(head==nullptr){
        head=new list(data);
        return;
    }
    recursive_insertion(head->next,data);
}
void recusive_insertion_pos(list *&head,int data, int p){
    static int pos=1;
    if(head==nullptr && pos<p){
        return;
    }
    if(pos==p){
        list *temp=new list(data);
        temp->next=head;
        head=temp;
        
        return;
    }
    pos++;
    recusive_insertion_pos(head->next,data,p);
    

}
void remove_duplicates(list *&head) {
    if (head == nullptr) {
        return;
    }

    list *current = head;

    // Traverse the list
    while (current != nullptr && current->next != nullptr) {
        if (current->data == current->next->data) {
            // Duplicate found, skip the next node
            list *temp = current->next;
            current->next = current->next->next;
            delete temp;  // Free the memory of the duplicate node
        } else {
            // Move to the next node only if no duplicate was found
            current = current->next;
        }
    }
}
void merge_linkedlist(list *&head1, list *&head2) {
    // Handle edge cases when either list is empty
    if (head1 == nullptr) {
        head1 = head2;
        return;
    }
    if (head2 == nullptr) {
        return;
    }

    // Create a dummy node to help with merging
    list *dummy = new list(0);
    list *current = dummy;

    // Traverse both lists and merge
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            current->next = head1;
            head1 = head1->next;
        } else {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }

    // If any nodes remain in either list, append them
    if (head1 != nullptr) {
        current->next = head1;
    } else if (head2 != nullptr) {
        current->next = head2;
    }

    // Update head1 to the merged list
    head1 = dummy->next;

    // Free the dummy node
    delete dummy;
}

void sorted(list *&head) {
    if (head == nullptr) {
        return;
    }

    bool swapped;
    list *temp;
    list *last = nullptr;

    // Continue looping until no swaps are made
    do {
        swapped = false;
        temp = head;

        while (temp->next != last) {  // Iterate till the last sorted element
            if (temp->data > temp->next->data) {
                // Swap the data
                int t = temp->data;
                temp->data = temp->next->data;
                temp->next->data = t;
                swapped = true;
            }
            temp = temp->next;
        }
        last = temp;  // Update the last sorted element
    } while (swapped);
}

void insert(list *head,int data){
    list *temp=new list(data);
    if(head==nullptr){
        head->data=temp->data;
    }
    while(head->next!=nullptr){
        head=head->next;
    }
    head->next=temp;
}
void print(list *head){
    while(head!=nullptr){
        std::cout<<head->data<<" ";
        head=head->next;
    }
}
void deletes(list *&head,int data){
    list *temp=head;
    list *prev=nullptr;
    if(temp!=nullptr && temp->data==data){
        head=temp->next;
        delete temp;
        return;
    }
    while(temp!=nullptr && temp->data!=data){
        prev=temp;
        temp=temp->next;
    }
    if(temp==nullptr) return;
    prev->next=temp->next;
    delete temp;
}
void reverse(list *&head){
    list *next=nullptr;
    list *prev=nullptr;
    while(head!=nullptr){
       next=head->next;
       head->next=prev;
       prev=head;
       head=next;
       
    }
    head=prev;
}
int main(){
    list *head=new list(1);
    list *head1=new list(1);
    insert(head,3);
    insert(head1,3);insert(head1,6);insert(head1,9);insert(head1,12);
    insert(head,2);
    insert(head,1);
    insert(head,5);
    // print(head);
    // reverse(head);
    // print(head);
    // reverse(head);
    // deletes(head,3);
    // recusive_insertion_pos(head,6,3);
    // sorted(head);
    merge_linkedlist(head,head1);
    // remove_duplicates(head);
    print(head);
}