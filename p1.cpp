#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};

Node* insert(Node* head, int x) {
    Node* temp = new Node(x);
    Node* current = head;
    
    if (head == nullptr) {
        head = temp;
    } else {
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = temp;
    }
    
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Recursive deletion function for Node structure
void deleteNode(Node*& head, int val) {
    if (head == nullptr) {
        cout << "Element not present in the list\n";
        return;
    }

    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    deleteNode(head->next, val);
}

int main() {
    Node* head = nullptr;
    head = insert(head, 50);
    head = insert(head, 50);
    head = insert(head, 510);
    head = insert(head, 560);
    head = insert(head, 950);

    int c;
    cin >> c;

    cout << "Original linked list: ";
    display(head);

    deleteNode(head, c);

    cout << "Linked list after deletion: ";
    display(head);

    return 0;
}
