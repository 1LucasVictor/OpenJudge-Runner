#include <stdio.h>
int main(void){
    int n,a,b,c,d,i=0;
    scanf("%d",&n);
    while(1){
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b){
        d=a;
        a=b;
        b=d;
    }
    if(b<=c){
        d=b;
        b=c;
        c=d;
    }
    if(a<=b){
        d=a;
        a=b;
        b=d;
    }
    if(a*a==b*b+c*c){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    i++;
    if(i==n){
        break;
    }
    }
    return 0;
}