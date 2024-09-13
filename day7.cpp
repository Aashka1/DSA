#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev = nullptr;
    Node* next = nullptr;
};

Node* del(Node* head) {
    if (head == nullptr) {
        // List is empty, nothing to delete
        return nullptr;
    }
    
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Check if the list has only one node
    if (current->prev == nullptr) {
        delete current;
        return nullptr;
    }

    Node* temp = current->prev;
    current->next = nullptr;
    delete temp;
    
    return head;
}
