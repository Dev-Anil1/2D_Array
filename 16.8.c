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

    for(i=0;i<=2;i++)
    {
        for ( j=0;j<=2;j++)
        {
            if(i>j)
                a[i][j]=0;
        }
    }

    for(i=0;i<=2;i++)
    {
        for ( j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


