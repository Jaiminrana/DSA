#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*  next;

    node(int data){
        this->data=data;
        next=NULL;
    }
};

void insertathead(node* &head,int data){

    node* nn=new node(data);
    nn->next=head;
    head=nn;
}
void insertattail(node* &head,int data){

    node* nn=new node(data);
    if(head==NULL)
    {
        head=nn;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nn;

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
void deletion(node* &head,int data){

    node* n=head;
    while(n->next->data!=data)
    {
        n=n->next;
    }
    node* todelete=n->next;
    n->next=n->next->next;
    delete todelete;
}

void deletehead(node* &head)
{
      node* todelete=head;
    
        head=head->next;
   
    delete todelete;
}


int main(){

    node* head=NULL;
    insertattail(head,10);
    insertattail(head,20);

    insertathead(head,50);
    insertathead(head,60);

    print(head);

    deletehead(head);
    cout<<endl;
    print(head);

    deletion(head,10);
    cout<<endl;
    print(head);

    deletion(head,20);
    cout<<endl;
    insertathead(head,55);
    print(head);
    
    
    return 0;
}