#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);

        // If linked list is empty
        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;

        // Traverse till last node
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = new_node;
    }

    void display(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->val << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

// Detect Cycle using Floyd's Algorithm
bool detectCycle(Node* head){

    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        // Cycle found
        if(slow == fast){
            cout << "Cycle detected at node: "
                 << slow->val << endl;
            return true;
        }
    }

    return false;
}

// Remove Cycle
void removeCycle(Node* &head){

    if(head == NULL){
        return;
    }

    Node* slow = head;
    Node* fast = head;
    bool hasCycle = false;

    // Step 1: Detect cycle
    while(fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            hasCycle = true;
            break;
        }
    }

    // If no cycle exists
    if(!hasCycle){
        cout << "No cycle present!" << endl;
        return;
    }

    // Step 2: Move fast to head
    fast = head;

    // Special case: cycle starts from head
    if(slow == head){
        while(slow->next != head){
            slow = slow->next;
        }
    }
    else{
        while(slow->next != fast->next){
            slow = slow->next;
            fast = fast->next;
        }
    }

    // Step 3: Remove cycle
    slow->next = NULL;

    cout << "Cycle removed successfully!" << endl;
}

int main(){

    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8);

    // Creating cycle: 8 -> 3
    ll.head->next->next->next->next->next->next->next
        = ll.head->next->next;

    cout << "Before Removing Cycle: ";
    cout << detectCycle(ll.head) << endl;

    removeCycle(ll.head);

    cout << "After Removing Cycle: ";
    cout << detectCycle(ll.head) << endl;

    ll.display();

    return 0;
}