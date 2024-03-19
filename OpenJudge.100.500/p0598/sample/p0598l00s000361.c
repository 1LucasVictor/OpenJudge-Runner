#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(b%a)printf("%d",b-a );
    else printf("%d", a+b);
    return 0;
}
