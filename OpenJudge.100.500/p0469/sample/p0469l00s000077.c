#include <stdio.h>

int main(void){
    int k,a,b;
    int f=0;
    scanf("%d",&k);
    scanf("%d %d",&a, &b);
    for(int i=a; i<=b; i++){
        if(i%k==0){
            printf("OK\n");
            f=1;
            break;
        }
    }
    if(f==0){
        printf("NG\n");
    }
    return 0;
}