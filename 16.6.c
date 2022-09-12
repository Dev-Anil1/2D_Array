#include<stdio.h>

int main()
{
    int i,j,sr=0,sc=0;
    int a[3][3];

    printf("Enter elements ");
    for(i=0;i<=2;i++)
    {
        for ( j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sr=sr+a[i][j];
        }
        printf("\nSum of row is %d",sr);
        sr=0;
    }

    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        {
            sc=sc+a[i][j];
        }
        printf("\nSum of column is %d",sc);
        sc=0;
    }

    return 0;
}
