#include<iostream>
using namespace std;
    class complex{
                private:
                    double a;
                    double b;
                public:
                    complex()
                    {
                        a=0;
                        b=0;
                    }
                    complex(double val)
                    {
                        a=val;
                        b=val;
                    }
                    complex(double a,double b)
                    {
                        this->a=a;
                        this->b=b;
                    }
                    complex(const complex& c)
                    {
                        this->a=c.b;
                        this->b=c.b;
                    }
                    void printcomplex()
                    {
                        cout<< a << "+i"<< b <<endl;
                    }
                    void addcomplex(complex&c1,complex&c2)
                    {
                        cout<<"Addition of the complex Number:"<<endl;
                        this->a=c1.a+c2.a;
                        this->b=c1.b+c2.b;

                    }
                    void subtractioncomplex(complex&c1,complex&c2)
                    {
                        cout<<"Subtraction of the complex number:"<<endl;
                        this->a=c1.a-c2.a;
                        this->b=c1.b-c2.b;
                    }
                    void multiplicationcomplex(complex&c1,complex&c2)
                    {
                        cout<<"Multiplication of the complex Number:"<<endl;
                         float a=(this->a*c1.a)-(this->b*c1.b);
                         float b=(this->a*c2.a)+(this->b*c2.b);
                    }

                

    };
    int main()
    {
        complex c1(1,2),c2(5,6),c3,c4(4,5),c5(3,7),c6,c7,c8,c9;
        
        c3.addcomplex(c1,c2);
        c3.printcomplex();

        c6.subtractioncomplex(c4,c5);
        c6.printcomplex();

        c7.multiplicationcomplex(c8,c9);
        c7.printcomplex();

        return 0;
    }