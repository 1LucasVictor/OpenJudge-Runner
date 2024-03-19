#include<stdio.h>
int main(void){
    int a,b,c,d,e;
    scanf("%d%d%d", &a, &b, &c);
    d=a+b+c;
    e=a*b*c; 
    if(d==17&&e==175){printf("YES\n");}
    else{printf("NO\n");}
    
    return 0;
}