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
// resolution of memory leak problem while deleteting the nth node 
Node* takeInput(){
    int data;
    Node* head;
    Node* tail;
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

Node* removeNthNode(Node* head,int index){
    Node* temp = head;
    Node* prev;
    Node* Next;
    int count = 0;
    while(count < index){
        prev = temp;
        temp = temp->next;
    }
    // prev->next = temp->next;
    Next = temp->next;
    prev->next = Next;
    temp->next = NULL;
    delete temp;


    return head;

}



int main(){
    Node* n1 = takeInput();
    PrintList(n1);
    int pos;
    cout<<"Enter Pos ";
    cin>>pos;
    Node* n2 = removeNthNode(n1,pos);
    PrintList(n2);


}