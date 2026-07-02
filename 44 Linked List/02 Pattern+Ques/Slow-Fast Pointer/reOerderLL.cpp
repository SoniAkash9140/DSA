#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int data){
        val=data;
        next=NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=nullptr;
    }

    void insertAtTail(int val){
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

    void display(){
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node* reOrderLL(Node* &head){
    //can check if ll have atleast 3 elem
    //s1-find middle elem
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    //now slow is pointing to the middle elem
    //s2-seperate the ll and reverse the second ll
    Node* curr=slow->next;
    slow->next=NULL;
    Node* prev=slow;

    while(curr){
        Node* nextPtr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextPtr;
    }

    //s3- merging the two halfs of the ll
    Node* ptr1=head; //ll first half
    Node* ptr2=prev; //ll second half

    while(ptr1!=ptr2){
        Node* temp=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=temp;
    }
    return head;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    //ll.insertAtTail(6);
    ll.display();
    ll.head=reOrderLL(ll.head);
    ll.display();
}