#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(Node*& head, int data) {

    Node* newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

Node* reverseList(Node* head) {

    Node* previous = NULL;
    Node* current = head;

    while (current != NULL) {

        Node* nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
    }

    return previous;
}

int main() {

    // Test Case 1
    Node* head = NULL;

    insertEnd(head, 1);
    
    cout << "Original List: ";
    display(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    display(head);

    /*
    Test Case 1:
    Input: 1 -> 2 -> 3 -> 4 -> 5
    Expected Output: 5 -> 4 -> 3 -> 2 -> 1

    Test Case 2:
    Input: 1
    Expected Output: 1
    */

    return 0;
}