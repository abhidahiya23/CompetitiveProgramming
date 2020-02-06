#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

//Node* head = NULL;

Node* Insert(Node* head,int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;

    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    int n,x;
    cout<<"enter the number you want to enter in the list ?\n";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the number";
        cin>>x;
        head = Insert(head,x);
        print(head);
        cout<<"\n";
        }

    return 0;
}
