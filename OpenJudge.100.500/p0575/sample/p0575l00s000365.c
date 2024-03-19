#include<stdio.h>

int main(){
    int a,b,c;

    scanf("%d %d",&a,&b);
    if(a<b){
        c = 0;
    }else{
        c = 10;
    }
    printf("%d",c);

    return 0;
}