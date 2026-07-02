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

bool isPalindrome(Node* head){
    //s-1: middle element 
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    //slow will be the middle element

    //s2-break ll into 2 parts
    Node* curr=slow->next;
    Node* prev=slow;
    slow->next=NULL;

    //s3-reverse the second half of the ll
    while(curr){
        Node* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }

    //s4-check if two ll are equal
    Node* head1=head;
    Node* head2=prev;
    while(head2){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true ;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(2);
    ll.insertAtTail(1);
    ll.display();
    cout<<isPalindrome(ll.head)<<endl;

    return 0;
}