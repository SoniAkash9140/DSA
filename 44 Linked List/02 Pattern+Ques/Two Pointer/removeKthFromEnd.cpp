#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

class LinkedList{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertAtTail(int val)
    {
        Node *new_node = new Node(val);
        if (head == nullptr)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};


////////////////Removing Kth Element from END ///////////
bool removeKthNodeFromEnd(Node* &head, int k) 
{
    Node* ptr1 = head;
    Node* ptr2 = head;

    //move pt2 by k step ahead
    int count=k;
    while(k--){
        ptr2=ptr2->next;
    }

    if(ptr2==NULL){ // k is equal tp length of ll
        //delete head node
        Node* temp=head;
        head=head->next;
        free(temp);
    }

    //now ptr2 is k step ahead of ptr1
    //when ptr2 is at null , ptr1 will be at node to be deleted
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    } 
    Node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
}

int main()
{
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.display();
    removeKthNodeFromEnd(ll1.head,5);
    ll1.display();
    return 0;
}