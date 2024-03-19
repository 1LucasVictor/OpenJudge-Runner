#include<stdio.h>

int main(){

    int a,b,t;
    scanf("%d%d",&a,&b);
    t=a-b;
    if(t<0){
        t=t*(-1);
    }
    if(t==0 || t==1){
        printf("Yay!\n");
    }
    else{
        printf(":(\n");
    }
    return 0;
}

