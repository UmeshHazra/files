//#include<stdio.h>
//#include<stdlib.h>

//typedef struct Node
//{
    //int data;
    //struct Node *next;
//}Node;

//Node *head = NULL;

 //void insertAtfirst(int);
 //void display();

 //int main(void)
 //{
   // insertAtfirst(50);
    //insertAtfirst(40);
    //insertAtfirst(30);
    //insertAtfirst(20);
    //insertAtfirst(10);

    //display();
    //return 0;
 //}

 //void insertAtfirst(int data)
 //{
    //Node *temp = malloc(sizeof(Node));
    //temp->data=data;
    //insert at begning;
    //temp->next=NULL;
    //temp=head;
 //}
 //void display()
 //{
    //Node *temp = head;
    //while(temp != NULL)
    //{
        //printf("%d",temp->data);
        //temp=temp->next;


    //}
    //printf("\n");
 //}



 #include<stdio.h>
 #include<stdlib.h>

 typedef struct Node
 {
   char data;
   struct Node *prev, *next;
 }Node;

 Node *head =NULL,*tail = NULL;
 Node *getNode(int data);
 {

   Node *newNode = malloc(sizeof(Node));
   if(!newNode)
   exit(1);
   newNode->next = data;
   newNode->prev = NULL;
   newNode->next = NULL;
   
   return newNode;
 }
void insertAtfirst(int data)
{
   Node *newNode = getNode(data);

   if(!head && !tail)//empty list;
       head = tail = newNode;
   else{
      newNode->next = head;
      head->prev = head;
      head = newNode;
   }
   
}

int main()
{
   insertAtfirst(6);
   insertAtfirst(7);
   insertAtfirst(8);
   insertAtfirst(9);
   insertAtfirst(10);
   insertAtfirst(11);

   return 0;
}

void deletFromFirst()
{
  struct node *temp;
  if(head == NULL)
  {
   printf("Underflow");
  }
  else{
    if(head->next == head)
    {
      head = NULL;
      free(head);
      printf("Node delet");

    }
    else{
      temp=head;
      while(temp->next !=head)
      {
         temp=temp->next;
      }
      temp->next=head->next;
      head->next->prev=temp;
      free(head);
      head=temp->next;
    }

  }



}