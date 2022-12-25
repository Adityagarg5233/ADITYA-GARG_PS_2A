#include<stdio.h>
void main()
{
    int bs,ts,hra,da,allowance,pf;
    char grade;
    printf("enter grade in uppercase");
    scanf("%c",&grade);
    printf("enter basic salary");
    scanf("%d",&bs);
    hra = 0.2*bs;
    da = 0.5*bs;
    pf = 0.11*bs;
    if(grade=='A')
        allowance = 1700;
    else if(grade=='B')
        allowance = 1500;
    else
        allowance = 1300;
    ts = bs+hra+da+allowance-pf;
    printf("the total salary is %d",ts);
}
