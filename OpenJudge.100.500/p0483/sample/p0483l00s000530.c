#include<stdio.h>
int main(void){
    int n,a,b,c;
    scanf("%d",&n);
    a = n/100;
    n = n%100;
    b = n/10;
    c = n%10;

    if(a==7 || b==7 || c==7)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}