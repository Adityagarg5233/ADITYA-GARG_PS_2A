#include<stdio.h>
void main()
{
    int c;
    printf("enter temperature in celcius");
    scanf("%d",&c);
    if(c<0)
        printf("Freezing temperature");
    else if(c>0&&c<10)
        printf("very cold temperature");
    else if(c>10&&c<20)
        printf("cold temperature");
    else if(c>20&&c<30)
        printf("Normal temperature");
    else if(c>30&&c<40)
        printf(" hot temperature");
    else if(c>=40)
        printf("very hot temperature");
}
