#include<stdio.h>

int main()
{
    int i,j,count=0,maxcount=0,row=0;
    int a[3][3];
    printf("Enter Elements ");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==1)
            {
                count=count+a[i][j];
            }
            if(count>maxcount)
            {
                maxcount=count;
                row=i;
            }

        }
        count =0;
    }
    printf("%d %d ",i,row);
    return 0;
}
