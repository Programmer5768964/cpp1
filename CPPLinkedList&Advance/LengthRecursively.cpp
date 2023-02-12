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

// int  recursivLen(Node* head){
//     if(head == NULL) return 0;
    
//     int smallans = recursivLen(head->next);
//     return 1 + smallans;

// }
/*bool isPresent(Node* head,int data){
    Node* temp = head;
    while(temp){
        if(temp->Data == data){
            return true;
        }else{
            temp= temp->next;
        }
    }
    return false;
} */

// recursively 
// bool isPresent(Node* head,int data){
//     if(head == NULL) return false;
//     if(head->Data == data) return true;
//     isPresent(head->next,data);
    
// }

// Slow & fast Pointer Approach In finding Mid 
// int findMid(Node* head){
//     Node* slow = head;
//     Node* fast = head->next;
//     while(fast && fast->next){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     if(fast == NULL){
//         return slow->Data;
//     }
//     return slow->next->Data;

    
// }
void PrintList(Node* head){
    Node* temp1 = head;
    while(temp1){
        cout<<temp1->Data<<" ";
        temp1= temp1->next;
    }
}

Node* Reverse(Node* head){
    Node* cur = head;
    Node* prev = NULL;
    Node* Next = NULL;
    while(cur){
        Next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = Next;
    }
    head = prev;
}


int main(){
    // Node* n1 = takeInput();
    // int* lenght = 0;
    // cout<<"Lenght of LL is "<<recursivLen(takeInput());
   
    // cout<<isPresent(n1,5);
    // if(isPresent(n1,5)){
    //     cout<<"Data found ";
    // }else{
    //     cout<<"Data not found ";
    // }
    // cout<<"Mid is "<<findMid(takeInput());
    Node* n1 = Reverse(takeInput());
    PrintList(n1);

}



