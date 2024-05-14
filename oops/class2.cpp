#include<iostream>>
using namespace std;

    class complex{
        private:
            double a;
            double b;
        public:
            complex(){
                a = 0;
                b = 0;

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
                this->a=c.a;
                this->b=c.b;
            }
            void printcomplex(){
                cout<<" +i"<<b<<endl;
            }
            
                
                

            

    };