//https://atcoder.jp/contests/abc165/tasks/abc165_a
#include <stdio.h>

int main() {
    
    int a, b, k, i;

    scanf("%d", &k);
    printf("\n");
    
    scanf("%d %d", &a, &b);
    
    if(b-a+1>k||b-a+1==k||k==1||a%k==0)
        printf("OK");
    else{
        for(i=0; i<b-a+1; i++){
            a++;
            //printf("繰り返し : %d\n", a);
        }
        if(a%k==0)
            printf("OK");
        else
            printf("NG");
    }
    
    return 0;
}
