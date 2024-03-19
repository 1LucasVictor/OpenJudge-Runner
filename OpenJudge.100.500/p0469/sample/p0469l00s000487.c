#include<stdio.h>
int main(void){
    int k,a,b;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
    int i,x;
    x=0;
    for(i=1;x<a;++i){
        x=k*i;
    }
    if(x<=b){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return 0;
}