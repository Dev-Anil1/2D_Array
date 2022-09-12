#include<stdio.h>

int main()
{
    int i,j,k,sum=0;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("Enter Elements of 3*3 for 1 st matrix ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter Elements of 3*3 for 2 nd matrix ");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }

}
