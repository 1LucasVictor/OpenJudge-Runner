#include<stdio.h>
int main()
{
    int k, a, b, check;
    scanf("%d%d%d", &k, &a, &b);
    if(a-b<k){
        for(int i=a; i<=b; i++){
            if(i%k==0){
                printf("OK\n");
                return 0;
            }
        }
        printf("NG\n");
    }
    else{
        printf("OK\n");
    }
    return 0;
}
