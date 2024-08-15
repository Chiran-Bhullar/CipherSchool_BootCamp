// Double Linked List

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);
    if(head == NULL) {
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteFromHead(Node* &head) {
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    if(head != NULL) head->prev = NULL;
    delete temp;
}

void deleteFromTail(Node* &head) {
    if(head == NULL) return;
    Node* temp = head;
    if(temp->next == NULL) {
        delete temp;
        head = NULL;
        return;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    display(head);  // Output: 3 2 1

    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);  // Output: 3 2 1 4 5

    deleteFromHead(head);
    display(head);  // Output: 2 1 4 5

    deleteFromTail(head);
    display(head);  // Output: 2 1 4

    return 0;
}
