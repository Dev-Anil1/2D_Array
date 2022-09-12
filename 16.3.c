#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int c[3][3];

    printf("Enter Elements of 3*3 matrix ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Before Transpose \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[j][i];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
