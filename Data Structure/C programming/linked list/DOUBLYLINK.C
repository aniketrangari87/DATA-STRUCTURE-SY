#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
    struct node *pre;

};

void linktraverse(struct node *ptr ){
 printf("\nThe given linked list using pre is : ");
    while(ptr!= NULL){
        printf(" %d ",ptr->data);
        ptr=ptr->next ;

    }
    }

    struct node *insertatstart(struct node *start , int data ){

        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=start;
        ptr->pre=NULL;
        start=ptr;
        return start;
    }
    struct node *insertafter(struct node *start,struct node *preptr,int data ){
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=preptr->next;
        ptr->pre=preptr;
        preptr->next=ptr;
        return start;
    }
    struct node *insertatlast(struct  node *start,int data){
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        struct node *preptr=start;
        while(preptr->next!=NULL){
            preptr=preptr->next;

        }
        ptr->data=data;
        preptr->next=ptr;
        ptr->pre=preptr;
        ptr->next=NULL;

return start;
    }
    struct node*deleteatfirst(struct node *start){
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr=start;
        start=start->next;
        start->pre=NULL;
        free(ptr);
        
        return start;


    }
    struct node *deleteatlast(struct node *start){
        struct node *ptr=start;
        struct node *temp=start->next;
        while(temp->next!= NULL){
            ptr=ptr->next;
            temp=temp->next;
        }
        ptr->pre->next=NULL;
        free(temp);

return start;
    }
struct node *deleteafter(struct node *start,int position){
    struct node *ptr=start;
    struct node *q=start->next;
    for (int i = 0; i < position-1; i++)
    {
        ptr=ptr->next;
        q=q->next;
    }
    
    ptr->next=q->next;
    free(q);
    return start;



}

int main(){
    struct node *start,*second,*third,*fourth;

    start=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    //giving the data to nodes 

    start->data=100;
    second->data=200;
    third->data=300;
    fourth->data=400;
    // Linking the nodes

    //for next node 
    start->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    // for pre node 
    start->pre=NULL;
    second->pre=start;
    third->pre=second;
    fourth->pre=third;

// linktraverse(start);
// start=insertatstart(start,600);
// linktraverse(start);
// start=insertafter(start,second,6000);
// linktraverse(start);
// start=insertatlast(start,9000);
// linktraverse(start);
// start=deleteatfirst(start);
// linktraverse(start);
// start=deleteatfirst(start);
// linktraverse(start);
// start=deleteatfirst(start);
// linktraverse(start);
// start=deleteatfirst(start);

linktraverse(start);
start=deleteafter(start,3);
linktraverse(start);




    return 0;
}