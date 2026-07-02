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

Node* rotateByK(Node* &head , int k){
    //1. find length of ll
    int n=0; 
    //2.find tail node 
    Node* tail=head;

    //it will calculate the length 
    while(tail->next){
        n++; //finding length
        tail=tail->next; //finding last node of ll
    }
    n++; //for including last node 

    k=k%n;
    if(k==0){
        return head;
    }

    tail->next=head;

    //3. traverse n-k nodes 
    Node* temp=head;
    for(int i=1; i<n-k; i++){
        temp=temp->next;
    }
    //temp is now pointing to (n-k) node

    Node* newhead=temp->next;
    temp->next=NULL;
    return newhead;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    ll.head=rotateByK(ll.head,3);
    ll.display();

    return 0;
}