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

class LinkedList
{
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

int getLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != nullptr)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

Node *moveHeadByK(Node *head, int k)
{
    Node *ptr = head;
    while (ptr != nullptr && k > 0)
    {
        ptr = ptr->next;
        k--;
    }
    return ptr;
}

Node *getIntersection(Node *head1, Node *head2)
{
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    Node *ptr1 = head1;
    Node *ptr2 = head2;

    if (l1 > l2)
    {
        ptr1 = moveHeadByK(head1, l1 - l2);
    }
    else
    {
        ptr2 = moveHeadByK(head2, l2 - l1);
    }

    while (ptr1 != nullptr && ptr2 != nullptr)
    {
        if (ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return nullptr;
}

int main()
{
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);

    LinkedList ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    
    ll2.head->next->next = ll1.head->next->next->next;

    ll1.display();
    ll2.display();

    Node *intersection = getIntersection(ll1.head, ll2.head);
    if (intersection)
    {
        cout << intersection->val << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}