#include<stdio.h>
#include<stdlib.h>

#define MAX 50

void insert();
void delete();
void display();
int queue[MAX];
int rear=-1;
int front=-1;

int main()
{
    int choise;
    while(1)
    {
        printf("1.Insert element to queue:\n");
        printf("2.Delete element to queue:\n");
        printf("Display the queue:\n");
        printf("quit\n");
        printf("Enter you choise:");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            break;
            default:
            printf("wrong choise");


        }
    }
}
void insert()
{
    int n;
    if(rear==MAX-1)
    {
        printf("Overflow\n");

    }
    else{
       if(front==-1)
       front=0;
       printf("insert the element in ueue:");
       scanf("%d",&n);
       rear=rear+1;
       queue[rear]=n;
    }
}
void delete()
{
    if(front==-1 || front>rear)
    {
        ("Underflow:\n");

    }
    else{
        printf("delet element from queueis :%d\n",queue[front]);
        front = front +1;
    }
}
void disply()
{
    int i;
    if(front == -1)
    {
        printf("Queue is empty\n");

    }
    else
    {
        printf("Queue is:\n");
        for(i=front;i<=rear;i++)
        printf("%d",queue[i]);
        printf("\n");
    }
}

















