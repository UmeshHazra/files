//Linkedlist using Objected oriented concept;
#include<iostream>
using namespace std;

class Node{
    private:
        int val;
        Node* next;
    public:
        Node(int val,Node* next){
            this->val=val;
            this->next=next;

        }
        Node(int val){
                this->val=val;
                this->next=NULL;
        }
    void setData(int data);
    int getData();
    Node* getNext();
    void setNext(Node* next);
    
};

int Node :: getData(){
        return val;
}
void Node :: setData(int val){
    this->val=val;
}
Node* Node :: getNext(){
    return next;

}
void Node :: setNext(Node* next){
    this->next=next;
}

class Linkedlist{
        private:
            Node* head;
        public:
            Linkedlist();
            ~Linkedlist();
            void insertFrist(int data);
            void insertLast(int data);
            int deleteFrist();
            int deleteLast();
            void printlinkedlist();

};
Linkedlist::Linkedlist(){
    this->head=NULL;
}

void Linkedlist::insertFrist(int data){
    Node* newNode = new Node(data,head);
    this->head = newNode;
}

Linkedlist::~Linkedlist(){
    while(head != NULL){
        Node* temp=head;
        head= head->getNext();
        cout<<"Deliting node: "<<temp->getData()<<endl;
        delete temp;
    }
    cout<<"Linkedlist deleted successfully"<<endl;
}

void Linkedlist::insertLast(int data){
    Node*temp = head;
    if(head){
        insertFrist(data);
    }
    else{
        Node* newNode = new Node(data);
        while(temp->getNext()){
            temp=temp->getNext();
        }
        temp->setNext(newNode);

    }

}

int Linkedlist::deleteFrist(){
    Node* temp=head;
    int num=temp->getData();
    head=head->getNext();
    delete temp;
    return num;
}

int Linkedlist::deleteLast(){
        Node* temp=head;
        if(temp==NULL){
            cout<<"Empty list";
            return -1;
        }else if(temp->getNext()==NULL){
            return deleteFrist();
        }
        while(temp->getNext()->getNext()){
            temp=temp->getNext();
            
        }
        int num = temp->getNext()->getData();
        delete temp->getNext();
        temp->setNext(NULL);
        return num;
}

void Linkedlist :: printlinkedlist(){
    Node* temp = head;
    while(temp){
        cout<<temp->getData()<<"->";
        temp=temp->getNext();
    }
    cout<<"NULL"<<endl;
}

int main(){
    Linkedlist *l = new Linkedlist();
    l->insertFrist(5);
    l->insertFrist(6);
    l->insertFrist(7);
    l->insertLast(8);

    l->printlinkedlist();

    cout<<l->deleteFrist()<<"is deleted"<<endl;
    cout<<l->deleteLast()<<"is deleted"<<endl;

    return 0;
}