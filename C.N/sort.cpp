#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,8,5,9,1,4,6};
    sort(begin(arr),end(arr));

    for(int i :  arr)
    {
        cout<<i<<" ";
    }

    return 0;
}



