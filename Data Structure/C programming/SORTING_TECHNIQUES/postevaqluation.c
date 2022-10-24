#include<stdio.h>
#include<ctype.h>
#define  POSTFIXSIZE 100
#define maxstack 100

int stack[maxstack];
top=-1;

void push(int data){


if (top>=maxstack-1)
{
    printf("The stack is overflow");
}
else {
    stack[top]=data;
    top++;
}
}

int pop(){
    int data;
    if (top==-1)
    {
     printf("the stack is inderflow");

    }
    else {
        stack[top]=data;
        top--;
        return data;

    }
    
}

void evalpostfix(char postfix[]){
int i;
int ch;
int val;
int  A,B;

for (int i = 0; postfix[i]!=')'; i++)
{
  if (isdigit(ch))
  {
    push(ch-'0');
  }
  else if (){

  }
  
}

}

int main(){



    return 0;
}