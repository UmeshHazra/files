//Exceptin handaling in cpp using oops concept by stack implementation;
#include<iostream>
using namespace std;

class StackOverflow{
    private:
        string messaage;
    public:
        StackOverflow(string message = "StackOverflow"){
                this->message=message;
        }
        string getMessage();
            return message;
};

class StackUnderflow{
        private:
            string messaage;
    public:
        StackUnderflow(string message = "StackUnderflow"){
                this->message=message;
        }
        string getMessage();
            return message;
};

class Stack{
    private:
        int *arr;
        int top;
        int size;
    public:
        Stack(int size);
        ~Stack();
        void push(int data);
        void pop();
        void printStack();
};
Stack::~Stack(){
    delete arr;
}

Stack::printStack(){
    for(int i=0;i>=0;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
 Stack::Stack(int size){
    this->top=-1;
    this->size=size;
    this->arr=new int[size];
}
void Stack::push(int data){
    if(top>=size-1){
        StackOverflow s;
    }
    this->arr[++top]=data;
}
int Stack::pop(){
    if(top<=size-1){
        StackUnderflow s;
        throw s;
    }
    return arr[top--];
}

int main(){

    int size;
    cout<<"Enter the Stack:"<<endl;
    cin>>size;
    Stack*s=new Stack(size);
    int ch=1;
    while (ch!=0)
    {
        cout<<"1.PUSH,2.POP,3.PRINT,4.EXIT: "<<endl;
        cin>>ch;
        try{
        switch(ch){
                case 1:
                        cout<<"Enter the data: "<<endl;
                        int data;
                        cin>>data;
                        s->push(data);
                break;

                case 2:
                        cout<<"poped data= "<<s->pop()<<endl;
                break;

                case 3:
                        s->printStack();
                break;

                case 0:
                        delete s;
                break;
            }
                
        }
    
    catch(StackOverflow se){
            cout<<se.getMessage();
    }
    catch(StackUnderflow se){
            cout<<se.getMessage();
    }
    

    }



    return 0;
}