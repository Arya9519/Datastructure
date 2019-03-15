#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node*link
}
struct Node * top=NULL;
void push(int x)
{
  struct Node*temp=(struct Node*)malloc(sizeof(struct Node*))
   temp->data=x;
   temp->link=top;
   top=temp;
}
 void pop()
    struct Node*temp

{
  if(top== NULL)
     return;
    temp=top;
    top=top->link;
     free(temp)
}

void print()
{
  struct Node*temp=link;
  while(temp!= NULL)
{  
 printf("%d",temp->data);
  temp=temp->link;
}

printf("\n");
}

int main()
{
link= NULL;
push(2);print();
push(3);print();
push(4);print();
push(5);print();
push(7);print();
pop();print();
}

