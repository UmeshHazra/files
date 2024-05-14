/*//excess by extra Function using operator overloding concept;
#include<iostream>
using namespace std;

//class MyFriend;
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
            friend void printMyclass(const Myclass &obj);
            friend ostream & operator<<(ostream & os,const Myclass &obj);


            
};

ostream & operator<<(ostream & os,const Myclass &obj ){
            cout<<"a="<<obj.private_a<<"b="<<obj.protected_b<<endl;

            return os;
        }
    void printMyclass(const Myclass &obj){
        cout<<"a="<<obj.private_a<<"b="<<obj.protected_b<<endl;

    }


int main(){
    Myclass obj(20,30);
    cout<<obj;
    return 0;
}*/



//excess by extra Function using stack concept;
#include<iostream>
using namespace std;

//class MyFriend;
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
            friend void printMyclass(const Myclass &obj);
            //friend ostream & operator<<(ostream & os,const Myclass &obj);


            
};

/*ostream & operator<<(ostream & os,const Myclass &obj ){
            cout<<"a="<<obj.private_a<<"b="<<obj.protected_b<<endl;

            return os;
        }*/
    void printMyclass(const Myclass &obj){
        cout<<"a="<<obj.private_a<<"b="<<obj.protected_b<<endl;

    }


int main(){
    Myclass obj(20,30);
    printMyclass(obj);
    //cout<<obj;
    return 0;
}