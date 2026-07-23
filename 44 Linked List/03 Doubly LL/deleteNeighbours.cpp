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
            cout << temp->val << " ";
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

};

void deleteSameNeighbour(Node* &head , Node* &tail){
    Node* currPtr = tail->prev;
    while(currPtr != head){
        Node* prevPtr =currPtr->prev;
        Node* nextPtr =currPtr->next;
        if(prevPtr->val==nextPtr->val){
            prevPtr->next=currPtr->next;
            nextPtr->prev=currPtr->prev;
            free(currPtr);
        }
        currPtr=prevPtr;
    }
}

int main()
{
    DoublyLikedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    // dll.insertAtEnd(1);
    dll.display();
    deleteSameNeighbour(dll.head , dll.tail);
    dll.display();
    return 0;
}