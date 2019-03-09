
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          
    struct node *next; 
}; 

struct node *head;
void insert(int n);
int  delete(int m);
void print();


int main()
{
    int n, m, totalDeleted;

    
    printf("Enter number of node to create: ");
    scanf("%d", &n);

    insert(n);

    printf("\nData in list before deletion\n");
    print();

    printf("\nEnter element to delete with key: ");
    scanf("%d", &m);


    totalDeleted = delete(m);
    printf("%d elements deleted with key %d.\n", totalDeleted, m);


    printf("\nData in list after deletion\n");
    print();

    return 0;
}


void insert(int n)
{
    struct node *newnode, *temp;
    int data, i;

    head = malloc(sizeof(struct node));

    
    if (head == NULL)
    {
        printf("Unable to allocate memory");
        exit(0);
    }
    

    
    printf("Enter data of node 1: ");
    scanf("%d", &data);

    head->data = data; 
    head->next = NULL; 
    temp = head;

  
    for (i = 2; i <= n; i++)
    {
        newnode = malloc(sizeof(struct node));

       
        if (newnode == NULL)
        {
            printf("Unable to allocate memory. Exiting from app.");
            exit(0);
        }

        printf("Enter data of node %d: ", i);
        scanf("%d", &data);

        newnode->data = data; 
        newnode->next = NULL; 
        temp->next = newnode; 
        temp = temp->next;
    }
    
}



void print()
{
    struct node *temp;

    
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);     
        temp = temp->next;              
    }
    printf("\n");
}


int delete(int m)
{
    int totalDeleted = 0;
    struct node *p, *c;
    while (head != NULL && head->data == m)
    {
        
        p = head;

       
        head = head->next;
        free(p);

        totalDeleted++;
    }

    p = NULL;
    c  = head;

    
    while (c != NULL)
    {
        
        if (c->data == m)
        {
            
            if (p != NULL) 
            {
                p->next = c->next;
            }

            
            free(c);

            c= p->next;

            totalDeleted++;
        } 
        else
        {
            p = c;
            c= c->next;
        }        

    }

    return totalDeleted;
}

 

 

