#include<stdio.h>
void main()
{
    char i,j;
    int s=0;
    for(i='A';i<='D';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",s+j);
        }
        printf("\n");
        s++;
    }
}
