#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3];


    printf("Enter Elements of 3*3 matrix ");

    for (i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}
