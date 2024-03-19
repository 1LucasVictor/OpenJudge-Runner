#include<stdio.h>

int main(void){
    int a,b;
    while(scanf("%d%d",&a,&b) != EOF){
    int cnt=1;
    int sum=a+b;
    while(sum>=10){
        sum /= 10;
        cnt++;
    }
    printf("%d\n",cnt);
    }
    return 0;
}
