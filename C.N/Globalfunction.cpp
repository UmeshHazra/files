//Implementation of template using global function;
#include<iostream>
using namespace std;

template<typename T>
    void sort(T arr[],int size){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-1-i;j++){
                if(arr[j]>arr[j+1]){
                    T temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

int main(){
        float arr[]={4.0,3.7,2.1,1.3};
        sort <float>(arr,4);
        for(int i= 0;i<4;i++){
            cout<<"arr[i]"<<"\t";
        }
        cout<<endl;

    return 0;
}