#include <iostream>
using namespace std;

struct Node { int data; Node* next; };

class LinkedList {
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    void insertAtStart(int v) { head = new Node{v, head}; }
    void insertAtEnd(int v) {
        Node* n = new Node{v, nullptr};
        if (!head) { head = n; return; }
        Node* t = head; while (t->next) t = t->next; t->next = n;
    }
    void insertAtPosition(int p, int v) 
    {
        if (p == 1) { insertAtStart(v); return; }
        Node* t = head; for (int i = 1; i < p - 1; i++) t = t->next;
        t->next = new Node{v, t->next};
    }
    void deleteFromStart() { Node* t = head; head = head->next; delete t; }
    void deleteFromEnd() 
    {
        if (!head->next) { delete head; head = nullptr; return; }
        Node* t = head; while (t->next->next) t = t->next; delete t->next; t->next = nullptr;
    }
    void deleteFromPosition(int p) {
        if (p == 1) { deleteFromStart(); return; }
        Node* t = head; for (int i = 1; i < p - 1; i++) t = t->next;
        Node* d = t->next; t->next = d->next; delete d;
    }
    void display() {
        Node* t = head; while (t) { cout << t->data << " -> "; t = t->next; }
        cout << "NULL\n";
    }
    ~LinkedList() { while (head) deleteFromStart(); }
};

int main() {
    LinkedList list;
    int n, value, choice, pos;
    cout << "Enter initial size: "; cin >> n;
    cout << "Enter elements: "; for (int i=0; i<n; i++) { cin >> value; list.insertAtEnd(value); }
    list.display();

    while (1) {
        cout << "\n1. Insert at Start\n2. Insert at End\n3. Insert at Position\n4. Delete from Start\n5. Delete from End\n6. Delete from Position\n0. Exit\nChoice: ";
        cin >> choice;
        if (choice == 0) break;
        if (choice == 1) { cout << "Value: "; cin >> value; list.insertAtStart(value); }
        else if (choice == 2) { cout << "Value: "; cin >> value; list.insertAtEnd(value); }
        else if (choice == 3) { cout << "Position and value: "; cin >> pos >> value; list.insertAtPosition(pos, value); }
        else if (choice == 4) list.deleteFromStart();
        else if (choice == 5) list.deleteFromEnd();
        else if (choice == 6) { cout << "Position: "; cin >> pos; list.deleteFromPosition(pos); }
        list.display();
    }
}