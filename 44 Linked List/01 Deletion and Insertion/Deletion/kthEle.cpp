#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // constructor with data and next
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    // constructor with only data
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* ArrToLL(vector<int> arr){
    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < arr.size(); i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}

Node* DelKthElem(Node* head, int K){
    if(head == NULL) return NULL;

    if(K == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        cnt++;

        if(cnt == K){
            prev->next = temp->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {1,8,9,3};

    Node* head = ArrToLL(arr);

    head = DelKthElem(head,3);

    print(head);
}