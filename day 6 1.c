#include<stdio.h>
void main()
{
int a[5][5],b[5][5],i ,j
,m;
printf("enter the size of row and column of martix\n");
scanf("%d",&m);
printf("enter the elements of matrix\n");
for(i=0;i<m;i++)
{
   for(j=0;j<m;j++)
   {
       scanf("%d",&a[i][j]);
   }
}

for(i=0;i<m;i++)
{
    for(j=m-1;j>=0;j--)
    {
        printf("%d ",a[j][i]);
    }
    printf("\n");
}
}
