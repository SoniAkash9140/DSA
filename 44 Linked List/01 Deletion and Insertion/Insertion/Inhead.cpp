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

///////////INSERT AT HEAD //////////////
void insertAtHead(Node* &head, int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}


// // // //  INSERT AT TAIL //////////////
void insertAtTail(Node* &head, int val){

    Node* new_node=new Node(val);
    
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    //last me pahunch gaya
    temp->next=new_node;
}


void updateVal(Node* head , int k , int val){
    Node* temp=head;
    int current=0;
    while(current!=k){
        temp=temp->next;
        current++;
    }

    //temp will be pointing to kth node
    temp->val=val;
}


////////////Insert at any position /////////
void insertAtAny(Node* head , int val , int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }

    Node* new_node=new Node(val);
    Node* temp=head;
    int current=0;
    while(current!=pos-1){
        temp=temp->next;
        current++;
    }

    //at last
    new_node->next=temp->next;
    temp->next=new_node;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    Node* head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,5);
    display(head);

    insertAtAny(head,3,2);
    display(head);  

    updateVal(head,2,9);
    display(head);

    return 0;
}