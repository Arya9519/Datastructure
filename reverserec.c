#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node*next;
};
struct Node*Reverse(struct Node* head)
{
  struct Node*current,*previous,*next;
  current = head;
  previous= NULL;
  while(current!=NULL)
    {
    next=current->next;
    current->next=previous;
    previous=current;
    current=next;
     }  
   head= previous;
   return head;
}
void print(struct Node*n)
{
  while(n!=NULL)
{
    printf("%d",n->data);
    n=n->next;
}
}
int main()
{
    struct Node*head=NULL;
    struct Node*second=NULL;
    struct Node*third=NULL;
    struct Node*fourth=NULL;
           head=(struct Node*)malloc(sizeof(struct Node));
           second=(struct Node*)malloc(sizeof(struct Node));
           third=(struct Node*)malloc(sizeof(struct Node));
           fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=2;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=fourth;
    fourth->data=5;
    fourth->next=NULL;
printf("orginal num is\n");
print(head);
printf("\n");
printf("Reverse is\n");
head=Reverse(head);
print(head);
 return 0;
}
