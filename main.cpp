//Melissa Ochoa FLores
//COMSC- 210
// LInk List Code
#include <iostream>
using namespace std;

const int SIZE = 7;  

struct Node {
    float value;
    Node *next;
};

void output(Node *);
void addNodeToFront(Node*&, float);
void addNodeToTail(Node*&, float);
void deleteNode(Node*&, float);
void insertNode(Node*&, float);
void deleteLinkedList(Node*&);

int main() {
    Node* head = nullptr;
    int count = 0;

    // create a linked list of size SIZE with random numbers 0-99
    for (int i = 0; i < SIZE; i++) {
        int tmp_val = rand() % 100;
        addNodeToFront(head, tmp_val);
    }
    output(head);

    // deleting a node
    int entry;
    cout << "Which node to delete (1 to " << SIZE << ")? " << endl;
    output(head);
    cout << "Choice --> ";
    cin >> entry;
    deleteNode(head, entry);
    output(head);

    // Insert a node
    cout << "After which node to insert 10000? " << endl;
    output(head);
    cout << "Choice --> ";
    cin >> entry;
    insertNode(head, entry, 10000);
    output(head);

    //deleting link list
    deleteLinkedList(head);
    output(head);
    return 0;
}

void output(Node* hd) {
    if (!hd) {
        cout << "Empty list.\n";
        return;
    }
    int count = 1;
    Node* current = hd;
    while (current) {
        cout << "[" << count++ << "] " << current->value << endl;
        current = current->next;
    }
    cout << endl;
}

void addNodeToFront(Node*&head, float valur) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

void addNodeToTail(Node *&head, float value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nellptr;

    if (ihead){
        head = newNode;
        }
    else { // its a second or subsequent node; place at the head
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
    }

void deleteNode(Node *&head, int position){
    if (head++ nullptr) {
        cout << "List is empty, cannot delete.\n";
        return;
    }

    Node* current = head;

    if (position == 1) {
        head = current->next;
        delete current;
        return;
    }
    
    Node* perv = nullptr;
    for (int i = 1; i < position && current 1 = nullptr; i++) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position is out of bounds.\n";
        return;
    }

    if (position == 1) {
        addNodeToFront(head, value);
        return;
    }

    // traverse that many times and delete that node
    Node *current = head;
    Node *prev = nullptr;

    for (int i = 1; i < (position && current 1= nullptr; i++)
        prev = current;
        current = current->next;
        }
    Node *newNode = new Node;
    newNode->value = value;
    
    if (prev) {
        prev->next = newNode;
    }
    newNode->next = current;
}

void deleteLinkedList(Node *&head) {
    Node *current = head;
    while (current) {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;

    return 0;
}

