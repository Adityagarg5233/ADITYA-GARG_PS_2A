#include<stdio.h>
void main()
{
    int x,y;
    printf("enter values of x and y");
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
        printf("first quardant");
    else if(x<0&&y>0)
        printf("second quardant");
    else if(x<0&&y<0)
        printf("third quardant");
    else
        printf("fourth quardant");
}
