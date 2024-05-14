#include<iostream>
using namespace std;

class point 
{
    private:
    
        int x;
        int y;
    
    public:
        point (int x=0, int y=0)
        {
            this->x=x;
            this->y=y;
        }
         virtual void Display()
        {
            cout<<"point :("<<x<<","<<y<<")"<<endl;
        }
        int getX();
        int getY();
};

    int point :: getX(){
        return x;
    }
    int point :: getY(){
        return y;
    }

class pixel:public point
{
    int colourcode;
    public:
    pixel(int x=0,int y=0,int colourcode =0):point(x,y)
    {
        this->colourcode=colourcode;
        
    }
    void Display(){
        cout<<"point: ("<<getX()<<","<<getY()<<")"<<"colourcode: "<< colourcode<<endl;
    }

};

int main()
{
    point *pptr = NULL;
    int ch =0;
    cout<<"1: point: 2: pixel:"<<endl;
    cin>>ch;
    if(ch==1)
    {
        pptr = new point(21,31);
    }
    else{
        pptr = new pixel(11,22,33);
    }
    pptr->Display();
}