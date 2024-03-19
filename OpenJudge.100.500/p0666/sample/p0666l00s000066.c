#include<stdio.h>

int main(){
    int x,a,b,t;

    scanf("%d %d %d",&x,&a,&b);

    t=b-a;

    if(t<=0){
        printf("delicious");
    }
    else if(t<=x){
        printf("safe");
    }
    else{
        printf("dangerous");
    }
    return 0;
}