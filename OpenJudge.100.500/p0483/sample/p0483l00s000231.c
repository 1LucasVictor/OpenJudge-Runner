#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a,b;
    a=n%100;
    b=a%10;
    if(n/100==7||a/10==7||b==7){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}