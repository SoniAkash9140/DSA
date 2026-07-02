#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<endl;
            temp=temp->next;
        } cout<<endl;
    }


    //insert at starting of the ll
    void insertAtStart(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }

    //inserting at the end of ll
    void insertAtEnd(int val){
        Node* new_node=new Node(val);
         if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return ;
    }

    void insertAtPosition(int val , int k){
        //assuming k is less than or equal to length of ll
        Node* temp=head;
        int count=1;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }
        //temp will be pointing to the node at (k-1) position
        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;

        new_node->prev=temp;
        new_node->next->prev=new_node;
        return;
    }
 };

int main(){
    DoublyLinkedList dll;
    // dll.insertAtStart(1);
    // dll.insertAtStart(2);
    // dll.insertAtStart(3);
    // dll.display();

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.display();
    
    dll.insertAtPosition(4,3);
    dll.display();
    return 0;
}