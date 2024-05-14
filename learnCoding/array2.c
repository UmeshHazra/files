#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],arr3[20];
    int i, m,n1,n2, index=0;
    printf("Enter the mumber of  element in arr1\n");
    scanf("%d",&n1);
    printf("Enter the number of  element in array2\n");
    scanf("%d",&n2);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);

    }
    for(int j=0;j<n2;j++)
    {
        scanf("%d",&arr2[i]);

    }
    m=n1+n2;
    for(i=0;i<n1;i++)
    {
        arr3[index]=arr1[i];
        index++;
    }
    for(i=0;i<n2;i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    printf("\n\n the msrge array is");
    for(i=0;i<m;i++)
    {
        printf("\n arr[%d]",i,arr3[i]);
    }
    return 0;

}