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


////////////////Checking two LL are Equal or Not ///////////
bool checkEqualLL(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    while (ptr1 != nullptr && ptr2 != nullptr)
    {
        if (ptr1->val != ptr2->val)
        {
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return (ptr1 == nullptr && ptr2 == nullptr);
}

int main()
{
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);

    LinkedList ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);

    ll1.display();
    ll2.display();

    cout << boolalpha << checkEqualLL(ll1.head, ll2.head) << endl;
    return 0;
}