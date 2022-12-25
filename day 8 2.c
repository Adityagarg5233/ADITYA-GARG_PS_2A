#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,c,s,co=0;
    printf("enter the base value\n");
    scanf("%d",&a);
    printf("enter the power value\n");
    scanf("%d",&b);
    printf("enter the Kth digit\n");
    scanf("%d",&k);
    c=pow(a,b);
    while(co<k&&c>0)
    {
        s=c%10;
        co=co+1 ;
        c=c/10;
    }
    print("%d",s);

}
