#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};


void inserthead(node* &head,int data)
{
    node* n=new node(data);
    n->next=head;
    head=n;
}

void inserttail(node* &head,int data)
{
    node* n=new node(data);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

node* reverse(node* &head)
{
    node* current=head;
    node* previous=NULL;
    node* next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
    return previous;
}

void print(node* head)
{
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
    inserttail(head,10);
    inserthead(head,200);
    inserttail(head,30);
    print(head);
    node* newhead=reverse(head);
    cout<<endl;
    print(newhead);

    return 0;
}