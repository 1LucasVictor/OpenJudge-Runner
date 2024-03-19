#include<stdio.h>

int main(void){
    int ns;
    int h=0,m=0,s=0;
    scanf("%d",&ns);
    
    while(ns>=60*60){
        h++;
        ns-=60*60;
    }
    while(ns>=60){
        m++;
        ns-=60;
    }
    s=ns;
    
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
