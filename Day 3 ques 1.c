#include <stdio.h>

int main() {
    // Write C code here
    int n,sum=0,fact=1,i;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for( i=1 ; i<=n ; i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("%d",sum);

    return 0;
}
