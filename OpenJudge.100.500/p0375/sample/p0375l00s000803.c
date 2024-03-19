#include <stdio.h>

void call(int n);
int include3(int n);

int main(void){

    int num;
    scanf("%d",&num);

    call(num);

    return 0;
}

void call(int n){
    int i;

    for(i=1;i<=n;i++){
        if(i%3==0||include3(i)){
            printf(" %d",i);
        }
    }

    printf("\n");
}

int include3(int n){
    if(n%10==3){
        return 1;
    }else{
        if(n<10) return 0;
        return include3(n/10);
    }
}