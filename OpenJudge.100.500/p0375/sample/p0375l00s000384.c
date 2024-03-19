#include<stdio.h>

void call(long n){
    long i,
        x;
    for(i=1;i<=n;i++){
        x = i;
        if (x%3==0||x%10==3){
            printf(" %ld", i);
        }else{
            x /= 10;
            if(x%10==3)printf(" %ld", i);
        }
    }
    printf("\n");
}

int main(){
    long n = 0;
    scanf("%ld", &n);
    call(n);
    return 0;
}