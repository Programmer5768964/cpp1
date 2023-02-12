// Insert Node At ith Position 
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
Node* insertNodeAtIth(Node* head,int index){
    Node* temp = head;
    Node* prev = NULL;
    Node* Next = NULL;
    int count = 0;
    int data;
    cout<<"Enter data ";
    cin>>data;
    if(index == 0){
        Node* n = new Node(data);
        n->next =head;
        head = n;
        return head;
    }
    while(count < index){
        prev = temp;
        temp = temp->next;
        count++;
    }
    Node* n = new Node(data);
    Next = prev->next;
    prev->next = NULL;
    prev->next = n;
    n->next = Next;

    return head;

}
void Print(Node* head){
    Node* temp1 = head;
    while(temp1){
        cout<<temp1->Data<<" ";
        temp1=temp1->next;
    }
}
int main(){
    Node* n = takeInput();
    Print(n);
    int pos;
    cout<<"Enter index to insert ";
    cin>>pos;
    Node* n1 = insertNodeAtIth(n,pos);
    Print(n1);

}