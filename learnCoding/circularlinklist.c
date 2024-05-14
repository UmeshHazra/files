#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *tail = NULL;
int count = 0;

// function
void insertAtbegning(int);
void insertAtEnd(int);
void insert(int, int); // dta,zero base possition
void display();

int main()
{
    insertAtbegning(2); // 2
    insertAtbegning(1); // 1 2

    insertAtEnd(3); // 1 2 3
    insertAtEnd(4); // 1 2 3 4

    insert(10, 0); // 10 1 2 3 4
    insert(20, 5); // 10 1 2 3 4 20
    insert(30, 3); // 10 1 2 3 4 20 30

    display(); // 10 1 2 30 3 4 20

    return 0;
}

Node *getNode(int data)

{
    Node *newNode = malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insertAtbegning(int data)
{
    Node *newNode = getNode(data); // creat node

    // if list is empty
    if (NULL == tail)
    {
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
    }
    count++; // increment node counter
}

void insertAtEnd(int data)
{
    Node *newNode = getNode(data); // creat node

    // if node is empty
    if (NULL == tail)
    {
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode; // updata tail
    }
    count++; // increment the node counter
}

void insert(int data, int position)
{
    if (position < 0 || position > count) // invalid
        exit(2);

    if (0 == position)
    {
        insertAtbegning(data);
        return;
    }
    if (position == count)
    {
        insertAtEnd(data);
        return;
    }
    Node *temp = tail;
    int i = 0;
    while (i < position)
    {
        temp = temp->next;
        i++;
    }
    Node *newNode = getNode(data); // node creation

    newNode->next = temp->next;
    temp->next = newNode;

    count++;
}
void display()
{
    if (NULL == tail) // empty list
    {
        printf("No data\n");
        return;
    }
    Node *temp = tail->next;

    do
    {
        printf("%d\n", temp->data);
        temp = temp->next;

    } while (temp != tail->next);

    printf("\n");
}