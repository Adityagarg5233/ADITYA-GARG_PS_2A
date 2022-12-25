#include <stdio.h>
int main()
{
    int n,sum=0,fact=1,i,temp;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for( i=1 ; i<=n ; i++)
    {
        fact=(fact*i);
        temp=fact/i;
        sum=sum+temp;
    }
    printf("%d",sum);

    return 0;
}


