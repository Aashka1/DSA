#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr) {}
};

Node* deleteFirstNode(Node* head) {
    if (head == nullptr) {
        // List is already empty, nothing to delete
        return nullptr;
    }

    Node* newHead = head->next;
    delete head;

    return newHead;
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Original List: ";
    displayList(head);

    // Delete the first node
    head = deleteFirstNode(head);

    cout << "List after deleting first node: ";
    displayList(head);

    // Clean up memory (deallocation)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
