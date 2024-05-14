#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev, *next;
}Node;

Node *head = NULL,*tail = NULL;
int count=0;
Node *getNode(int data)
{
    Node *newNode = malloc(sizeof(Node));

    if(!newNode)
    exit(1);

    newNode->data = data;
    newNode->prev=newNode->next=NULL;

    return newNode;

    
}
void insertfast(data)
{
    Node *newNode = getNode(data);

    if(head && tail)
    head = tail=newNode;

    else
    {
        newNode->next=head->next;
        head->prev=newNode;
        head=newNode;
    }
    count++;
}
void insertlast(data)
{
    Node *newNode=getNode(data);

    if(head && tail)
    head=tail=newNode;

    else
    {
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    count++;

}
void display()
{
    Node *temp=head;

    if(!head && !tail)
    {
        printf("list is empty");
        return;
    }
    else
    {
        while(temp)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }

}
int main()
{
    insertfast(2);
    insertfast(3);
    insertfast(4);
    insertfast(5);

    return 0;

}


