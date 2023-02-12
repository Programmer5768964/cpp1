#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
Node* takeInput(){
    int Data;
    Node* head = NULL;
    Node* tail = NULL;
    cin>>Data;
    while(Data != -1){
        Node* n = new Node(Data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = tail->next;
        }
        cin>>Data;
    }
    return head;
}
void PrintLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
   Node* n1 = takeInput();
   PrintLL(n1);
}

