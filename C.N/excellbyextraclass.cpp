//Concept of Friend;

//Excess by extra class
#include<iostream>
using namespace std;

class MyFriend;
class Myclass{
        private:
            int private_a;
        protected:
            int protected_b;
        public:
            Myclass(int private_a,int protected_b){
                this->private_a=private_a;
                this->protected_b=protected_b;

            }
            friend class MyFriend;

            
};

class Myfriend{
    public:
        void displayMyclass(Myclass  &obj){
            cout<<"a="<<obj.private_a<<"b="<<obj.protected_b<<endl;
        }
};

int main(){
    Myclass obj1(20,30);
    Myfriend obj2;
    obj2.displayMyclass(obj1);
    return 0;
}