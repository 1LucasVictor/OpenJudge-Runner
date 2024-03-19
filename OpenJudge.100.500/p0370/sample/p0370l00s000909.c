#include<stdio.h>
#include <string.h>


int main(void){
    int a,b;
    char c[100];
    int u,w,x,y,z;
    while(1){
        scanf("%d %s %d",&a,&c,&b);
        u = strcmp("?",c);
        w = strcmp("+",c);
        x = strcmp("-",c);
        y = strcmp("*",c);
        z = strcmp("/",c);
        
        if(u==0)
            break;
        if(w==0)
            printf("%d\n",a+b);
        if(x==0)
            printf("%d\n",a-b);
        if(y==0)
            printf("%d\n",a*b);
        if(z==0)
            printf("%d\n",a/b);
    }
    return 0;
}