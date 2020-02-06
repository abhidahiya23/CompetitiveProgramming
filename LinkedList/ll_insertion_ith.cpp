#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL; //declare Global head

void Insert(int x,int pos = 1){
// Insert element at any given position
    Node* temp = new Node();
    temp->data = x;
    if(pos == 1 ){
        temp->next = head;
        head = temp;
        return;
    }

    Node* temp1 = head;
    for(int i=1;i<pos-1;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void Delete(int pos = 1){
// delete a node at a given position
    Node* temp = head;
    if(pos ==1){
        head = temp->next;
        delete temp;
        return;
    }

    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;

    delete temp2;

}

void Deleteall(){
// delete all nodes
    Node* temp = head;
    while(head != NULL){
        temp = head;
        head = temp->next;
        delete temp;
    }
}

int getlength(Node* head){
//recursive soln to get length
    if(head == NULL)
        return 0;
    else
        return 1 + getlength(head->next);
}

int getSearch(Node* head,int x){
//recursive soln to get length
    if(head->data == x)
        return 1;
    else if(head->next == NULL)
        return 0;
    else
        return getSearch(head->next,x);
}

void length(){
// Iterative solution to get head count
    Node* temp = head;
    int cnt=0;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    cout<<cnt<<"\n";
}
void print()
{// function to print all elements
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}
int nthNode(int n){
    Node* temp = head;
    int cnt =0;
    while(temp != NULL){
        if(n == cnt )
            return temp->data;
        temp = temp->next;
        cnt++;
    }
}
int main(){
    int n,x,pos;
    //cout<<"enter the number you want to enter in the list ?\n";
    //cin>>n;
    /*
    for(int i=0;i<n;i++){
        cout<<"Enter the number";
        cin>>x>>pos;
        Insert(x,pos);
        print();
        cout<<"\n";
    } */

    //Node* cur = head;
    Insert(6);
    Insert(5);
    Insert(3);
    Insert(2);
    Insert(1);
    Insert(4,4);
    int l= getlength(head);
    l = l - 5 ; // nth node from end is equal to l-n node from beginning
    cout<<nthNode(l);


    return 0;
}
