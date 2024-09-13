#include <iostream>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void reversePrint(SinglyLinkedListNode* head) {
    // Check if the list is empty
    if (head == nullptr) {
        return;
    }

    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* next = nullptr;

    // Reverse the list
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    // Print the reversed list
    while (prev != nullptr) {
        cout << prev->data << endl;
        prev = prev->next;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        SinglyLinkedListNode* head = nullptr;
        SinglyLinkedListNode* tail = nullptr;

        for (int i = 0; i < n; i++) {
            int data;
            cin >> data;

            if (head == nullptr) {
                head = new SinglyLinkedListNode(data);
                tail = head;
            } else {
                tail->next = new SinglyLinkedListNode(data);
                tail = tail->next;
            }
        }

        reversePrint(head);
    }

    return 0;
}
