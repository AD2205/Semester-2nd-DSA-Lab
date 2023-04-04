#include<stdio.h>

int main()
{
    int arr[3][2],arr1[2][3];
printf("Enter the elements of the first array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }
  printf("The transposed matrix is:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}