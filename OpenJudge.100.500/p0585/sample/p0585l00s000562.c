#include<stdio.h>

int main(void){

    int a,b,t;
    scanf("%d%d%d",&a,&b,&t);
    int i=0;
    while(1){
        if(a*i>t){
            break;
        }
        i++;
    }

    printf("%d",(i-1)*b);

    return 0;
}