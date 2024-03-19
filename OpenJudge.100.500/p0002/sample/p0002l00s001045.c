#include<stdio.h>
int main(void)
{
    int a,b,c,i,x;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d%d%d",&a,&b,&c);
    if(a==b || a==c || b==c){
        printf("NO\n");
    }
    else if(a*a==b*b+c*c){
        printf("YES\n");
    }
    else if(b*b==a*a+c*c){
        printf("YES\n");
    }
    else if(c*c==a*a+b*b){
        printf("YES\n");
    }
    else
        printf("NO\n");
    }
    return 0;
}