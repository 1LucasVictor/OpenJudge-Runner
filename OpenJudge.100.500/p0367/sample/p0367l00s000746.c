#include<stdio.h>
int main(void){
int a,b,c,i;
int d=0;
    scanf("%d %d %d", &a, &b, &c);
    for(i=a;i<=b; i++){
    if (c%i==0){
    d++;}
}
printf("%d\n", d);
return 0;
}
