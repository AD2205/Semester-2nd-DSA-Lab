#include<stdio.h>

void main()
{
    int arr[10];
    int p=0,q=9;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    while (p !=q)
    {
        if(arr[p]<arr[q])
        {
            p++;
        }
        else{
            q--;
        }
    }

    printf("The maximum element of the array is:%d",arr[p]);

    return ;


}