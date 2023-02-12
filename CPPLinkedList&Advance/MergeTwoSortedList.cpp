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

Node* MergeTwoSortedList(Node* l1,Node*l2){
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    Node* finalHead = NULL;

    if(l1->Data < l2->Data){
        finalHead = l1;
        l1 = l1->next;
    }else{
        finalHead = l2;
        l2 = l2->next;
    }
    Node* p = finalHead;
    while (l1 != NULL && l2 != NULL)
    {
        if(l1->Data < l2->Data){
            p->next = l1;
            l1 = l1->next;
        }else{
            p->next = l2;
            // l1 = l1->next;
        }
        p = p->next;
    }

    while (l1)
    {
        p->next = l1;
        // l1 = l1->next;
        // p = p->next;
    }

     while (l2)
    {
        p->next = l2;
        // l2 = l2->next;
        // p = p->next;
    }

    return finalHead;

    
    
}
