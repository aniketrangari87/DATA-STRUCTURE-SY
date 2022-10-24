#include<stdio.h>
#include<stdlib.h>


struct node {

int data ;
struct node *left  ;
struct node *right ;


};

struct node *newnode(int data ){

    struct node *node =(struct node *)malloc(sizeof(struct node ));
    node->data=data;
    node->left=NULL;
    node->right=NULL;

 return node;
};
void printorder(struct node *node){
   if(node==NULL){
    return ;
   }
printorder(node->left);
   printf(" %d ",node->data);

   printorder(node->right);

}


int main(){
    struct node *root =newnode(100);
      root->left=newnode(200);
      root->right=newnode(300);
      root->left->left=newnode(400);
      root->left->right=newnode(500);
       root->right->left=newnode(600);
      root->right->right=newnode(700);

printorder(root);
getchar();



return 0;
}
