#define Max 4 //size of array

#include<stdio.h>
#include<stdbool.h>

int stack[Max];
int top=-1;

void push(int);
void pop();
void peak();

int main()
{
    push(6);
    
    push(5);
    push(4);
    push(2);

    return 0;

}




bool overflow()
{
    if(Max - 1 == top)
    return true;

    return false;
}
bool underflow()
{
    if(-1 == top)
    return true;

    return false;
}

void push(int data)
{
    if(overflow())// if ( true==overflow)
    {
        printf("stack is overflow");
        return;

    }
    top++;
    stack[top]=data;

}

void pop()
{
    if(underflow())
    {
        printf("satck is overflow");
        return;

    }
    top--;

}
void peak()
{
    if(underflow())
    {
        printf("stack is underflow. no data in top");
        return;


    }
    printf("%d\n",stack[top]);
}
