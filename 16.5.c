#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3];
    printf("Enter elements ");
    for(i=0;i<=2;i++)
    {
        for ( j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }
         sum=sum+(a[0][2]+a[1][1]+a[2][0]);
    printf("Sum of left diagonals is %d",sum);
    return 0;
}
