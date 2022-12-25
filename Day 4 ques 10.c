#include<stdio.h>
long long int power(long long int x,long long int n)
{
    if (n == 0)
        return 1;
    if (x == 0)
        return 0;

    return x * power(x, n - 1);
}
int main()
{
    long long int a,b;
    printf("Enter the value of a and b\n");
    scanf("%lld %lld",&a,&b);
    printf("%lld\n", power(a, b));
}
