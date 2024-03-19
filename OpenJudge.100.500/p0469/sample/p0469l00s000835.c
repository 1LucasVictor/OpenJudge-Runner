#include<stdio.h>

int main(void)
{
    int i;
    int A, B, K, flag=0;

    scanf("%d",&K);
    scanf("%d %d",&A, &B);

    for(i=A; i<=B; i++) {
        if(i%K == 0) {
            flag = 1;
            break;
        } 
    }

    if(flag == 1) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
