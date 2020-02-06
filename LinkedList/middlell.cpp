#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
void Insert(Node** head,int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = *head;
    *head = temp;

}

void print(Node* head,int x = 0){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}

void printnth(Node* head,int x){
    Node* temp = head;
    for(int i=1;i<=x-1;i++){
        temp=temp->next;
    }

    cout<<temp->data;
}

int getCount(Node* head){
    if(head == NULL)
        return 0;
    else
        return 1 + getCount(head->next);
}

int main(){

    Node* head = NULL;

    Insert(&head,6);
    Insert(&head,5);
    Insert(&head,4);
    Insert(&head,3);
    Insert(&head,2);
    Insert(&head,1);

    print(head);
    int count = getCount(head);
    printnth(head,(count/2)+1);

    return 0;
}
