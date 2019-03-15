#include <stdio.h>
#include <string.h>

#define MAX 100	
int top=-1;
int item;

char s[MAX];
void push(char item);
char pop(void);
int isEmpty(void);
int isFull(void);
 
int main()
{
    char str[MAX];
    int i;
    
    printf("Input a string: ");
    scanf("%[^\n]s",str); 
    
    for(i=0;i<strlen(str);i++)
        push(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=pop();

    printf("Reversed String is: %s\n",str);
    
    return 0;
}
 
void push(char item)
{
    if(isFull())
    {
        printf("\nStack is FULL !!!\n");
        return;
    }
    top=top+1;
    s[top]=item;
}
 char pop()
{
 
    if(isEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }
    item = s[top];
    top=top-1;
    return item;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
