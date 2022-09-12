#include<stdio.h>
int main()
{
    int i,j,count=0;
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
            if(a[i][j]==0)
                count++;
        }
    }
    if((i*j/2<count))
        printf("Sparse");
    else
        printf("Not");

    return 0;
}


