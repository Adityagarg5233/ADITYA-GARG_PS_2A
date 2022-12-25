#include<stdio.h>
int fact(int n);
int main() {
    int x,f;
    printf("Enter any number for factorial: ");
    scanf("%d",&x);
    f=fact(x);
    printf("%d",f);
    return 0;
}
int fact(int n) {
    if(n==0)
    return 1;
    else
    return (n*fact(n-1));
}
