// singly linklist global head implementation
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}Node;

Node *head = NULL;

void insertAtBeginning(int );
void Display();

int main()
{
    insertAtBeginning(40);
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtBeginning(10);
    
    Display();
    return 0;
}



void insertAtBeginning(int data)
{
    Node *temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = head;

    head = temp;


}
void Display()
{
    Node *temp = NULL;

    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}