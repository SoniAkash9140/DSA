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


// Function to build linked list from vector
Node* buildList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Function to delete head of linked list
Node* delHead(Node* head) {
    if (head == nullptr) return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Function to print linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    vector<int> arr={2,5,8,7};
    Node* head = buildList(arr);
    cout << "Original list: ";
    print(head);
    head = delHead(head);
    cout << "After deleting head: ";
    print(head);
    return 0;
}