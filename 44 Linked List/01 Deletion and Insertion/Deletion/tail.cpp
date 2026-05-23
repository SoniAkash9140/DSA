#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor with data and next
    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    //constructor only with data 
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* ArrToLL(vector<int> arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

Node* delTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;

    return head;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    vector<int> arr={1,8,9,3};
    Node* head=ArrToLL(arr);
    cout<<"Original List"<<endl;
    print(head);
    head=delTail(head);
    cout<<"After Deletion"<<endl;
    print(head);
    return 0;
}

