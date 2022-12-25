#include<stdio.h>
void main()
{
    int i,j,s=0,n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",s+j);
        }
        s++;
        printf("\n");
    }
}
