#include<stdio.h>
int main(){

    int a,b,n;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    if(n*a > b){
        printf("%d\n", b);
    }else{
        printf("%d\n", n*a);
    }
    return 0;
}
