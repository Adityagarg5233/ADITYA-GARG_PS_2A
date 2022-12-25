#include<stdio.h>
void main()
{
    int i,j,s=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j+s);
        }
        s++;
        printf("\n");
    }
}
