
#include <stdio.h>

int isPerfect(int num){
    int sum=0;
    for(int j = 1 ; j < num ; j++) {
        if(num % j == 0)
            sum=sum+j;
    }

    return sum == num;
}

int main() {
    int lb,ub,sum;
    printf("Enter the range\n");
    scanf("%d %d",&lb,&ub);
    for(int i = lb ; i <= ub ; i++) {
        if(isPerfect(i))
            printf("%d\n", i);
    }

    return 0;
}
