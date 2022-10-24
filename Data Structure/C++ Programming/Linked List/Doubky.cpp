#include<iostream>

using namespace std;


class node{
public:
    int data;
 node *next;
 node *prev;


};
void peek(node *head){
   node *ptr=new node();
   ptr=head;

   while (ptr!=NULL)
   {
    cout<<ptr->data<<" ";
    ptr=ptr->next;
   }
   

}
node  *addfirst(node *head, int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;
    return head;

}
node *addlast(node *head,int data){
    node *newnode=new node();
    node *p=head;

    while(p->next!=NULL){
    p=p->next;
    }
    newnode->data=data;
    p->next=newnode;
    newnode->prev=p;
    newnode->next=NULL;
    
    return head;

}
node *addafter(node *head, int data ,node *prenode){
    node *newnode=new node();
     newnode->data=data;
     newnode->next=prenode->next;
     prenode->next=newnode;
     return head;
}
int main(){
    node *head;
    node *second;
    node *third;
    head=new node();
    second=new node();
    third=new node();
    
     head->data=100;
    second->data=200;
    third->data=300;

     head->next=second;
     second->next=third;
     third->next=NULL;

     head->prev=NULL;
     second->prev=head;
     third->prev=second;

   peek(head);
   head=addafter(head,900,second);
   cout<<endl;
   peek(head);


    return 0; 

}
