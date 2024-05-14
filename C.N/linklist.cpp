#include<iostream>
using namespace std;
    class LinkedlistNode{
            private:
                int data;
                LinkedlistNode *next;
            public:
                LinkedlistNode(int data,LinkedlistNode *next);
                int getData();
                LinkedlistNode *getNext();
                void setData(int data);
                void setNext(LinkedlistNode *next);

    };
    LinkedlistNode :: LinkedlistNode(int data,LinkedlistNode *next){
        this->data=data;
        this->next=next;
    }
    int LinkedlistNode :: getData()
    {
        return data;
    }
    LinkedlistNode *LinkedlistNode :: getNext()
    {
        return next;
    }
    