#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr; // Initialize the head of the linked list

void insert(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->next = nullptr;

    if (head == nullptr) {
        head = temp;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            
            current = current->next;
            
        }
        current->next = temp;
    }
}

void display() {
    Node* t = head;
    while (t != nullptr) {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << "null" << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        insert(a);
    }
    display();

    // Free memory by deleting nodes
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
