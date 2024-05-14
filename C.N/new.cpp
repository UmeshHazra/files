#include<iostream>
using namespace std;
int main()
{
    int i=0;
    try{
        if(i==0){
         throw 1.0;
        }
        cout<<"End of the Program!";
    }
    
    catch(int exc){
        cout<<"In Specialized exception block for int";
    }
    catch(...){
        cout<<"In generic catch block";
    }
    return 0;
}
