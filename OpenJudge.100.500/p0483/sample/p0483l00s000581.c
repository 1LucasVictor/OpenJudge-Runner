#include<stdio.h>

int main(){
    int n;
    int a,b,c;
    scanf("%d",&n);
    a = n%10;
    b = n%100-a;
    c = n%1000-(a+b);

    if(a == 7){
        printf("Yes\n");
    }else if(b == 70){
        printf("Yes\n");
    }else if(c == 700){
        printf("Yes\n");
    }

    return 0;
}