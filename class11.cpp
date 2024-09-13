#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
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

Node* insertpos(Node* head, int pos, int data) {
    Node* temp = new Node(data);
    if (pos == 1) {
        temp->next = head;
        return temp;
    }
    Node* curr = head;
    for (int i = 0; i <pos-1; i++) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

void disp(Node* head) {
    Node* t = head;
    while (t != nullptr) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    Node* head = nullptr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insert(x, head);
    }
    int a, b;
    cin >> a >> b;
    head = insertpos(head, b, a); // Update the head with the result of insertpos
    disp(head);
    return 0;
}
