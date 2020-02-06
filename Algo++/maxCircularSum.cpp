#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node*&head,int data){
    node *n = new node(data);
    n->next = head;
    head = n;
}

int length(node* head){

    int len = 0;

    node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }

    return len;
}


int display(node*head,int len){
    int maxE = INT_MIN,flag=len;
    node* temp = head;
    int cs=0,ms=INT_MIN;
    while(temp!=NULL && len){
        //cout<<temp->data<<" ";
        temp = temp->next;
        len--;

        cs += temp->data;
        if(cs<0) cs =0;
        ms = max(ms,cs);
        maxE = max(maxE,temp->data);
        if(temp->data<0){
            flag--;
        }
    }

    //cout<<ms<<" ";
    if(ms==0 && flag==0){
        ms = maxE;
    }
    return ms;
}

void insertAtTail(node*&head,int data){
    if(head==NULL){
        insertAtHead(head,data);
        return;
    }

    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    node* n = new node(data);
    temp->next = n;
}


int main(){

    // 8 -8 9 -9 10 -11 12
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node* head = NULL;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=n-1;i>=0;i--){
            insertAtHead(head,arr[i]);
        }
    
        node* temp = head;
        int len =0;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }

        temp->next = head;
        
        int ms=INT_MIN;
        for(int i=0;i<len+1;i++){
            ms = max(ms,display(head,len+1));
            head = head->next;
        }

        cout<<ms<<endl;
    }

    return 0;
}

