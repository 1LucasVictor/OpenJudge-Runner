#include<stdio.h>
int main(void){
    int c0,c1;
    char c;
    c0=0;
    c1=0;
    while(scanf("%c",&c)!=EOF){
        if(c=='0'){
            c0++;
        }else if(c=='1'){
            c1++;
        }
    }
    if(c0>c1){
        printf("%d\n",c1*2);
    }else{
        printf("%d\n",c0*2);
    }
    return 0;
}