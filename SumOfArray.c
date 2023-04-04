#include<stdio.h>

void main()
{
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

   for(int i=0;i<10;i++)
   {
       sum+=arr[i];
   }

    printf("The sum of elements of the array is:%d",sum);

    return ;


}