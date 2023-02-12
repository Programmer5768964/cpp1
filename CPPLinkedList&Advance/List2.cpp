// Print ith Node 
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
void PrintIthNode(Node* head,int i){
    Node* temp = head;
    int count = 0;
    while(count < i){
        temp = temp->next;
        count++;
    }
    cout<<"Value at "<<i<<" is "<<temp->Data;

}
int main(){
    Node* n = takeInput();
    int pos;
    cout<<"Enter index ";
    cin>>pos;
    PrintIthNode(n,pos);
}