#include<stdio.h>

void call(int n){
    int i,
        x;
    for(i=1;i<=n;i++){
        x = i;
        if (x%3==0||x%10==3){
            printf(" %d", i);
        }else{
            x /= 10;
            if(x%10==3)printf(" %d", i);
        }
    }
    printf("\n");
}

int main(){
    int n = 0;
    scanf("%d", &n);
    call(n);
    return 0;
}