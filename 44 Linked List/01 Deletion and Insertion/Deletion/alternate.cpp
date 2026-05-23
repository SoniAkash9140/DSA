#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtTail(int val) {
        Node* new_node = new Node(val);

        if (head == NULL) {
            head = new_node;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void deleteAlternate() {
        Node* current = head;

        while (current != NULL && current->next != NULL) {
            Node* toDelete = current->next;
            current->next = toDelete->next;
            delete toDelete;
            current = current->next;
        }
    }

    void reversePrint(Node* head){
        //base case
        if(head==NULL){
            return;
        }

        reversePrint(head->next);
        cout<<head->val<<" ";
    }

    // delete duplicate nodes from sorted linked list
    void deleteDuplicateNode(Node* &head) {
        Node* current = head;

        while (current != NULL && current->next != NULL) {
            if (current->val == current->next->val) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } 
            else {
                current = current->next;
            }
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);

    // cout << "Before duplicate deletion: ";
    // ll.display();

    // ll.deleteDuplicateNode(ll.head);

    // cout << "After duplicate deletion: ";
    // ll.display();
    ll.display();
    ll.reversePrint(ll.head);

    return 0;
}