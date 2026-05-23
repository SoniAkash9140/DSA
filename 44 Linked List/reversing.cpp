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


    Node* reverseLL(Node* &head){
        Node* prevptr=NULL;
        Node* currptr=head;

        while(currptr!=NULL){
            Node* nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
        }

        Node* new_head=prevptr;
        return new_head;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    //reversing a LinkedList 
    Node* reverseLLRecursion(Node* head){
        //base case
        if(head==NULL || head->next==NULL){
            return head;
        }

        //recursive call
        Node* new_head=reverseLLRecursion(head->next);
        head->next->next=head;
        head->next=NULL;
        return new_head;
    }


    ///////// Reverse K Elements //////////
   Node* reverseKLL(Node* head, int k) {
    Node* prevptr = NULL;
    Node* curptr = head;
    int counter = 0;

    while (curptr != NULL && counter < k) {
        Node* nextptr = curptr->next;
        curptr->next = prevptr;   // FIXED LINE
        prevptr = curptr;
        curptr = nextptr;
        counter++;
    }

    if (curptr != NULL) {
        Node* new_head = reverseKLL(curptr, k);
        head->next = new_head;
    }

    return prevptr;
}
};

int main() {
   LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
   ll.insertAtTail(6);
   ll.display();
   ll.head=ll.reverseLL(ll.head);
   ll.display();

   ll.head=ll.reverseLLRecursion(ll.head);
   ll.display();

   ll.head=ll.reverseKLL(ll.head,3);
   ll.display();
    return 0;
}