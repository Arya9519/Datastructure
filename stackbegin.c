#include<stdio.h>
#define MAX_SIZE101
int A[MAX_SIZE];
int top=-1;
void push(int x)
{
 if(top=MAX_SIZE-1)
  {  
    printf("error on the stack");
          return;
   }
      top++
      A[top]=x;
   
 
}
void pop()
  {
    if(top=pop-1)
     prinf("no elements pop");
     return;
   }
      top--
}   
int top()
{
  return A[top];
}
void print(0
{   int i;
    printf("stack:");
    for(int i=0;i<top;i++)
    printf("%d",A[i]);
    printf("\n");
}
int main()
{
  push(1);print();
  push(2);print();
  push(3);print();
  pop();print();
  push(5);print();
}

