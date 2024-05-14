#include<iostream>
#include<vector>
using namespace std;

class Student{
    int id;
    string name;
public:
        Student(int id,string name){
            this->id=id;
            this->name=name;

        }
        friend ostream& operator<<(ostream os,Student & s);

};
ostream& operator<<(ostream& os,Student & s){
    os<<"Name"<<s.Name<<"id"<<s.id<<endl;
        return os;
}


int main(){
        

    retrun 0;
}