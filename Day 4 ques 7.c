#include<stdio.h>
int main()
{
    int fact=1,sum=0;
    int n,r;
    printf("Enter the 'n' number : ");
    scanf("%d",&n);
    printf("\n Strong numbers are :");
    for(int i=1;i<=n;i++)
    {
        int k=i;
        while(k!=0)
        {
            r=k%10;
            fact=factorial(r);
            k=k/10;
            sum=sum+fact;
        }
        if(sum==i){
        printf("%d, ",i);

           }
           sum=0;
    }


    return 0;
}

 int factorial(int f)
    {
        int facto=1;
        for(int i=1; i<=f;i++)
        {
            facto=facto*i;
        }
        return facto;
    }
