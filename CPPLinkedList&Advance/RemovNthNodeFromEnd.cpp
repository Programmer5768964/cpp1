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
    cin>>data;
    while(data != -1){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = tail->next;
        }
        cin>>data;

    }
    return head;
}
void PrintList(Node* head){
    Node* temp1 = head;
    while(temp1){
        cout<<temp1->Data<<" ";
        temp1= temp1->next;
    }
}
Node* RemoveNothNodeFromEnd(Node* head,int k){
    Node* start = head;
    Node* end = head;
    Node* prev = NULL;
    Node* Next = NULL;
    int count = 1;
    while(end){
        // end = end->next;
        if(count <= k){
            end = end->next;
        }else{
            prev = start;
            start = start->next;
            end = end->next;
        }
    }
    prev->next = start->next;
    start->next = NULL;
    delete start;
    return head;

}
int main(){
    Node* n1 = RemoveNothNodeFromEnd(takeInput(),3);
    PrintList(n1);




}