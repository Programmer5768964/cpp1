// Find lenght of given Linked List
#include<iostream>
using namespace std;
class Node{
    public:
    int Data;
    Node* next;
    Node(int Data){
        this->Data = Data;
        next = NULL;

    }
};
Node* takeInput(){
    int data;
    Node* head = NULL;
    Node* tail = NULL;
    cout<<"Enter data ";
    cin>>data;
    while(data !=-1){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = tail->next;
        }
        cout<<"Enter data ";
        cin>>data;
    }
    return head;
}
int Length(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    Node* n = takeInput();
    cout<<"Lenght of list is "<<Length(n);
}