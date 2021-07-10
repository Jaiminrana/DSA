#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data)
        {
            this->data=data;
            next=NULL;
        }
};

void insert_at_head(node* &head,int value)
{
    node* newnode=new node(value);

    newnode->next=head;
    head=newnode;

}

void insert_at_tail(node* &head,int data){

    node* n=new node(data);
    if(head==NULL)
    {   
        head=n;
        return;
    }
    node* temp=head;//it act as an iterator
    while(temp->next!=NULL)//traversing til last element to add new node
    {
        temp=temp->next;
        
    }
    temp->next=n;   
    

}

void print(node* head){

    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    // cout<<"hello" ;
    node* head=NULL;
    insert_at_tail(head,10);
    // insert_at_head(head,200);
    // insert_at_tail(head,30);
    print(head);

    return 0;
}