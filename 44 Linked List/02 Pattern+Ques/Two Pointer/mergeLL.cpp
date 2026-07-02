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
Node* mergeLL(Node* &head1, Node* head2 ) 
{
    Node* dummyHeadNode=new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3=dummyHeadNode;

    while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    if(ptr1){
        ptr3->next=ptr1;
    }else{
        ptr3->next=ptr2;
    }
    return dummyHeadNode->next;
}

int main()
{
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.display();

    LinkedList ll2;
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.display();

    LinkedList ll3;
    ll3.head=mergeLL(ll1.head,ll2.head);
    ll3.display();


    return 0;
}