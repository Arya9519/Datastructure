#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

struct BstNode
{
int data;
struct BstNode* left;
struct BstNode* right;
};

struct BstNode *getNewNode(int data)
{
struct BstNode newNode = (struct BstNode)malloc(sizeof(struct BstNode));
newNode->data = data;
newNode->left = newNode->right = NULL;

return newNode;
}

struct BstNode *Insert(struct BstNode *root, int data)
{
if(root == NULL)
{
root = getNewNode(data);
}
else if(data < root->data){
root->left = Insert(root->left, data);
}
else{
root->right = Insert(root->right, data);
}
return root;
}

bool Search(struct BstNode *root, int number)
{
if(root == NULL) return false;
else if(root->data == number)
    return true;
else if(number < root->data)
{
return Search(root->left, number);
}
else
return Search(root->right, number);
}

int main(void)
{
struct BstNode* root = NULL;
root = Insert(root, 15);
root = Insert(root, 10);
root = Insert(root, 20);
root = Insert(root, 5);
root = Insert(root, 30);

int number;
printf("Enter a number that you want to search : ");
scanf("%d", &number); fflush(stdin);
if(Search(root, number) == true)
{
    printf("Found");
}
else
    printf("Not Found");
getchar();
}
