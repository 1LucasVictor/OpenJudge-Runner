#include<stdio.h>
int main (void){
    int a,b,c,hoge;
    scanf("%d %d %d",&a,&b,&c);
    hoge=a;
        if (a>b){
            hoge=b;
            b=a;
            a=hoge;
        }
        if (b>c){
        hoge=b;
        b=c;
        c=hoge;
        }
        if (a>b){
            hoge=b;
            b=a;
            a=hoge;
        }
                printf("%d %d %d\n",a,b,c);

        return 0;
    
    
    
}
