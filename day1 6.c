#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three sides");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("Equilateral triangle");
    else if(a==b||b==c||c==a)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
}
