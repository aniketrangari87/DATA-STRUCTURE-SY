#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *next;
};
int search(struct node *ptr,int value){
int pos=0;
    while(ptr->data!=value){
        ptr=ptr->next;
        pos++;

    }
        
        return pos;
    
}

int main() {
    struct node *start,*second,*third;

    start=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node ));

    start->data=100;
    second->data=200;
    third->data=300;
    start->next=second;
    second->next=third;
    third->next=NULL;

search(start,300);
printf("the value is found at index : %d in the linked list ",search(start,300));
    return 0; 
}