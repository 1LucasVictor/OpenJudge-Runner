#include<stdio.h>
int main(void){
    int a, b, c, n;
    scanf("%d %d", &a, &b);
    
    while(a != " " || b != " "){
        c=a+b;
        n=0;
        do{
            n++;
            c /= 10;
        }while(c);
        printf(" %d\n", n);
        a=" ";
        b=" ";
        scanf("%d %d", &a, &b);    }
    return 0;
}
