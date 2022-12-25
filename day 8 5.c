#include<stdio.h>
void main()
{
int i,m,n,j;
printf("enter the value");
scanf("%d",&m);
for(i=1;i<=m;i++)
{
    if(i%2==0)
    {
        printf("2 ");
    }
    else if(i%3==0)
    {
        printf("3 ");
    }
    else
        for(j=5;j<=m;j++)
    {
        if(i%j==0)
        {
            printf("%d ",j);
        }
    }
}
}
