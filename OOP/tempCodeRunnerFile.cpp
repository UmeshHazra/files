#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    char sec;

};
int main()
{
    student Umesh;
    cin>>Umesh.name>>Umesh.roll>>Umesh.sec;
    cout<<Umesh.name<<" "<<Umesh.roll<<" "<<Umesh.sec<<endl;
    return 0;
}