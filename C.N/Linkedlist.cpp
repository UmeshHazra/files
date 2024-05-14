#include<iostream>
using namespace std;
    class LinkedlistNode{
        private:
            int data;
            LinkedlistNode *next;
        public:
            LinkedlistNode(int data,LinkedlistNode *next);
                //this->data=data;
                //this->next=next;

                int getData();
                LinkedlistNode *getNext();
                void setData(int data);
                void setNext(LinkedlistNode *next);


                
    };
    LinkedlistNode :: LinkedlistNode(int data,LinkedlistNode *next){
        this->data=data;
        this->next=next;
    }
    class Linkedlist{
      private:
        LinkedlistNode *head;
    public:
        Linkedlist();
        //~Linkedlist();
        void insertFirst(int data); 
        void printlist();
    };
    Linkedlist :: Linkedlist(){
        this->head=NULL;
    }
    void Linkedlist :: insertFirst(int data){
        this->head = new LinkedlistNode(data,head);
    }
    void Linkedlist::printlist(){
        LinkedlistNode *temp = this->head;
        while(head){
            cout<<temp->getData();
            temp=temp->getNext();
        }
        cout<<"NULL"<<endl;
    }
int main(){
    Linkedlist *l = new Linkedlist();
    l->insertFirst(5);
    l->insertFirst(6);


   // return 0;
}
