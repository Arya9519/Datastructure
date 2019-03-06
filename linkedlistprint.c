#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node*next;
};
struct Node*head;
void Insert(int x)
{ 
   struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
   temp->data=x;
   temp->next = head;
   temp=head;

}


  void print(struct Node*temp)
{

  while(temp!=NULL)
{    printf("list is:");
    printf("%d",temp->data);
    temp=temp->next;
}
    printf("\n");
}


   int main()
{
   head=NULL;
   int n,x,i;
   printf("how many  numbers\n");
   scanf("%d",&n);
   printf("enter the numbers:\n");
   for(i=0;i<n;i++)
   scanf("%d",&x); 
   Insert(x);
   print(head);
}
   

