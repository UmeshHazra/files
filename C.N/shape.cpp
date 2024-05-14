#include<iostream>
using namespace std;
    
    class shape{
        private:
        string shapeName;

        public:
            shape(string shapeName);
            virtual double getArea()=0;
            string getShapeName();
            
    };
    shape :: shape(string shapeName){
        this->shapeName = shapeName;
    }
    string shape :: getShapeName(){
        return shapeName;
    }
    class Circle:public shape{
        private:
                double r;
        public:
                Circle(double r);
                double getArea();
    };
    Circle :: Circle(double):shape("Circle"){
        this->r=r;
    }
    double Circle :: getArea(){
        return 22/7*r*r;
    }
    class Triangle:public shape
    {
        private:
            double b;
            double h;
        public:
            Triangle(double b, double h);
            double getArea();
    };
    Triangle :: Triangle(double b,double h):shape("Triangle")
    {
        this->b=b;
        this->h=h;
    }
    double Triangle :: getArea()
    {
        return b*h/2;
    }
    class Rectangle:public shape
    {
        private:
            double a;
            double b;
        public:
            Rectangle(double a, double b);
            double getArea();

    };
    
    
    int main(){
        int n =0;
        float r,h,w,b;
        
        shape * s=NULL;
        do{
            cout<<"1.circle\n 2.Rectangle\n 3.Triangle\n"<<endl;
            cout<<"Enter the number that you want:";
            cin>>n;
            switch(n)
            {
                case 1:
                        cout<<"Enter the radius of circle: ";
                        cin>>r;
                        s = new circle(r);
                        cout<<"Area of the circle:"<<s->getArea()<<endl;
                break;
                case 2:
                        cout<<"Enter the height :";
                        cin>>r;
                        cout<<"Enter the width :";
                        s = new rectangle(h,w);
                break;
                case 3:
                        cout<<"Enter the height :";
                        cin>>h;
                        cout<<"Enter the base :";
                        cin>>b;
                        s = new triangle(h,b);
                break;
            }

        }while(n!=4);
    }
    