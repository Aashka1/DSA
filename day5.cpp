#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = nullptr;
        prev=nullptr;
    }
};

Node* reverseList(Node* head) {
   
    Node* current = head;
    
    Node* temp = nullptr;
    while (current != nullptr) {
        // next = current->next;
        // current->next = prev;
        // prev = current;
        // current = next;
        temp=current->next;
        current->next=current->prev;
        current->prev=temp;
        current =current->prev;
    }

    return current; // 'prev' points to the new head of the reversed list
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create a sample linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    displayList(head);

    // Reverse the linked list
    head = reverseList(head);

    cout << "Reversed List: ";
    displayList(head);

    // Clean up memory (deallocation)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
