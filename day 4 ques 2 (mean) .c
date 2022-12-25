#include <stdio.h>
int mean(int x,int y,int z, int m, int n);
int main() {
    int a,b,c,d,e;
    printf("Enter five values\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int avg;
    avg=mean(a,b,c,d,e);
    printf("Mean of 5 numbers is %d",avg);

    return 0;
}
int mean(int x,int y,int z, int m, int n)
{
    int sum=x+y+z+m+n;
    int average=sum/5;
    return (average);
}
