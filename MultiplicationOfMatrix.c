#include<stdio.h>

int main()
{
    int a1[3][2],a2[2][3],a3[3][3];
printf("Enter the elements in the first array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements in the second array:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
       {
        a3[i][j]=0;
        for(int k=0;k<2;k++)
        {
            a3[i][j] +=a1[i][k]*a2[k][j];
        }
       }
    }
   printf("The required array is:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",a3[i][j]);
        }

        printf("\n");
    }
    return 0;
}