
#include <stdio.h>
int gcd(int x,int y);
int main() {
    int a,b,hcf;
    printf("Enter two number for gcd\n");
    scanf("%d\n%d",&a,&b);
    hcf=gcd(a,b);
    printf("%d",hcf);
    return 0;
}
int gcd(int x,int y){
     int temp;
    if(y>x){
    {
        for(int i=1 ; i<=x ; i++)
        {
            if(x%i==0 && y%i==0)
            temp=i;
        }

    }
      return temp;  }
    else
    {
    {
        for(int i=1 ; i<=y ; i++)
        {
            if(x%i==0 && y%i==0)
            temp=i;
        }

    }
     return temp;  }
}
