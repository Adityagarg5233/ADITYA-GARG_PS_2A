#include <stdio.h>

int main() {
    int lb,ub,sum;
    printf("Enter the range\n");
    scanf("%d %d",&lb,&ub);
    for(int i = lb ; i <= ub ; i++) {
        sum=0;
        for(int j = 1 ; j < i ; j++) {
            if(i%j==0)
                sum=sum+j;
        }

        if(sum==i)
            printf("perfect number between %d and %d is:%d\n",lb,ub,sum);
    }

    return 0;
}
