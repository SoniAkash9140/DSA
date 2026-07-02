#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLikedList
{
public:
    Node *head;
    Node *tail;

    DoublyLikedList()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << endl;
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

    bool isPalindromeDLL(Node *head, Node *tail)
    {
        while (head != tail && tail != head->prev)
        {
            if (head->val != tail->val)
            {
                return false;
            }
            head = head->next;
            tail = tail->prev;
        }
        return true;
    }
};

int main()
{
    DoublyLikedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    // dll.insertAtEnd(4);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.display();
    cout << dll.isPalindromeDLL(dll.head, dll.tail) << endl;

    return 0;
}