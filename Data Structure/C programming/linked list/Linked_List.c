#include<stdio.h>
#include<stdlib.h>
 

 struct  node 
 {
    int data;
    struct node *next;
 };


int main(){
     struct node *head ,*middle,*last;

 head=malloc(sizeof(struct node));
  middle =malloc(sizeof(struct node));
   last=malloc(sizeof(struct node));

head->data=100;
middle->data=200;
last->data=300;

head->next=middle;
middle->next=last;
last->next=NULL;

struct ani *next;

printf("%d\n%d\n%d",*head,*middle,*last);

    return 0;
}