//oprarator overloding
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
                    complex addcomplex(complex& c)
                    {
                        double a =this->a+c.a;
                        double b = this->b+c.b;
                        complex res(a,b);
                        return res;

                    }
                    complex subtractcomplex(complex& c)
                    {
                        double a =this->a-c.a;
                        double b = this->b-c.b;
                        complex res(a,b);
                        return res;

                    }
                    complex multiplicationcomplex(complex& c)
                    {
                        double a=(this->a*c.a)-(this->b*c.b);
                        double b=(this->a*c.b)+(this->b*c.a);
                        complex res(a,b);
                        return res;

                    }
                

    };
    int main()
    {
        complex result;
        complex c1(7,8),c2(5,6);
        //c1.printcomplex();
        //c2.printcomplex();

        complex c3 = c1.addcomplex(c2);
        complex c4 = c1.subtractcomplex(c2);
        complex c5 = c1.multiplicationcomplex(c2);

        c3.printcomplex();
        c4.printcomplex();
        c5.printcomplex();


        return 0;
    }