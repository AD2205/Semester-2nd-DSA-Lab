#include<stdio.h>



int main()
{

int a1[2][2],a2[2][2],a3[2][2];
printf("Enter the elements in first array");
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
       scanf("%d",&a1[i][j]);
    }
}
printf("Enter the elements in second array");
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
       scanf("%d",&a2[i][j]);
    }
}
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
       a3[i][j]=a1[i][j]+a2[i][j];
    }
}
printf("The array after addition is");
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
       printf("%d ",a3[i][j]);
    }
    printf("\n");
}
return 0;
}


