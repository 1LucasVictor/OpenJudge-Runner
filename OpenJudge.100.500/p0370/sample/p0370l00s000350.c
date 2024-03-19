#include <stdio.h>
int main(){
    int a,b;
    char t;
    for(;;){
        scanf("%d %c %d",&a,&t,&b);
        if(t=='?') break;
        if(t=='+') a+=b;
        if(t=='-') a-=b;
        if(t=='*') a*=b;
        if(t=='/') a/=b;
        printf("%d\n",a);
    }
    return 0;
}