#include<iostream>
using namespace std;
/*
struct Node{
    int data;
    Node* next;
};
*/
class Node{
    public:
    int data;
    Node* next;
};


void printList(Node* n){
    while(n!=NULL){
    cout<<n->data;
    n=n->next;}
}

int main(){

    Node* S=NULL;
    Node* head;
    Node* first = NULL;
    Node* second = NULL;
    head = NULL;

    head = new Node();
    first = new Node();
    second = new Node();

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data =3;
    second->next = NULL;

    S = head;
    printList(S);
    return 0;
}
