#include<stdio.h>

void main()
{
    int arr[10];
    int x;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     
     scanf("%d",&x);

     for(int i=0;i<10;i++)
     {
        if(arr[i]==x)
        {
            printf("The required element is present in the array");
        }
        else{
            printf("The required element is not present in the array");
        }
     }
   
   // printf("The minimum element of the array is:%d",arr[p]);

    return ;


}