#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void peek(node * ptr){

    while(ptr!=NULL){
        cout<<" "<<ptr->data;
        ptr=ptr->next;
    }
cout<<endl;
}
node *addfirst(node *head,int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=head;
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
    newnode->next=NULL;
    return head;

}
node *addafter(node *head,int data ,node *prenode){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=prenode->next;
    prenode->next=newnode;
    return head;
}
node *addindex(node *head,int data,node *index){
    node *newnode=new node();
    node *p=head;
    while(p->next!=(index)){
        p=p->next;
    }
    newnode->data=data;
    newnode->next=p->next;
    p=newnode;
    return head;
}
int main()
{
    node *head;
    node *second;
    node *third;
    head = new node();
    second = new node();
    third = new node();

    head->data = 100;
    second->data = 200;
    third->data = 300;
    head->next = second;
    second->next = third;
    third->next = NULL;
    cout<<"The given Linked list : ";
     peek(head);
    cout<<"addfirst :";
    head=addfirst(head,9000);
    peek(head);
    cout<<"addlast :";
    head=addlast(head,8000);
    peek(head);
    cout<<"addafter :";
    head=addafter(head,500,head);
    peek(head);
    cout<<"addatindex :";
    head=addindex(head,900000,third);
    peek(head);

    return 0;
}