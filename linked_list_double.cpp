#include <iostream>

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            // Decide what to do if there is no head
        } else {
            // Insert the node
        }
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (!tail) {
            // Decide what to do if there is no tail
        } else {
            // Insert the node
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList myList;

    std::cout << "Doubly Linked List before insert: ";
    myList.display();

    myList.insertAtBeginning(1);
    myList.insertAtBeginning(2);
    myList.insertAtEnd(4);

    std::cout << "Doubly Linked List after insertion: ";
    myList.display();
    
    return 0;
}
