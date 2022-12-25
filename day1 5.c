#include<stdio.h>
void main()
{
    int d,m,y,m1,y1,s=0,i,a,b=0;
    printf("enter date dd:mm:yy ");
    scanf("%d%d%d",&d,&m,&y);
    if(m==1)
        m1=1;            //the month code is 144 025 036 146
    else if(m==2)
        m1=4;
    else if(m==3)
        m1=4;
    else if(m==4)
        m1=0;
    else if(m==5)
        m1=2;
    else if(m==6)
        m1=5;
    else if(m==7)
        m1=0;
    else if(m==8)
        m1=3;
    else if(m==9)
        m1=6;
    else if(m==10)
        m1=1;
    else if(m==11)
        m1=4;
    else if(m==12)
        m1=6;
    else
    {
        printf("enter valid month");
        exit(0);
    }
    if(y>=1500&&y<=1599)
        y1=0;
    else if(y>=1600&&y<=1699)
        y1=6;
    else if(y>=1700&&y<=1799)
        y1=4;
    else if(y>=1800&&y<=1899)
        y1=2;
    else if(y>=1900&&y<=1999)
        y1=0;
    else if(y>=2000&&y<=2099)
        y1=6;
    else
    {
        printf("write year below 2099");
        exit(0);
    }

    for(i=1;i<=2;i++)
    {
        a=y%10;
        b=b+a*10;
        y=y/10;
    }
    s=d+m1+y1+b+(y%4);
    s=s%7;
    if(s==0)
        printf("sunday");
    else if(s==1)
        printf("monday");
    else if(s==2)
        printf("tuesday");
    else if(s==3)
        printf("wednesday");
    else if(s==4)
        printf("thursday");
    else if(s==5)
        printf("friday");
    else
        printf("saturday");

}
