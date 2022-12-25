#include<stdio.h>
void main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    (year%400==0||year%4==0&&year%100!=0)?printf("leap year"):printf("not a leap year");
}
