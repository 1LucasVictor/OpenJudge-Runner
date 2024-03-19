#include <stdio.h>
int main(void){
    int a,b,c,count=0,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;++i){
        if(i*2>c){
            if(b>=c){++count;break;}
            else{break;}
        }
        if(c%i==0){++count;}
    }
    printf("%d\n",count);
    return 0;
}