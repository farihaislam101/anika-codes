#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert values into a linked list
void insert(Node*& head, int value) {
    if (head == nullptr) {
        head = new Node(value);
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new Node(value);
    }
}

// Function to compare two linked lists
bool areListsEqual(Node* head1, Node* head2) {
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data != head2->data) {
            return false;  // If elements at the same position are not equal, return false
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // If one list is longer than the other, they are not equal
    return (head1 == nullptr && head2 == nullptr);
}

int main() {
    // Input values for the first linked list
    Node* head1 = nullptr;

    int value1;
    while (true) {
        cin >> value1;
        if (value1 == -1) {
            break;
        }
        insert(head1, value1);
    }

    // Input values for the second linked list
    Node* head2 = nullptr;

    int value2;
    while (true) {
        cin >> value2;
        if (value2 == -1) {
            break;
        }
        insert(head2, value2);
    }

    // Check if the linked lists are equal and print the result
    if (areListsEqual(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
