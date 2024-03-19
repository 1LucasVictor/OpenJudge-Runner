#include<stdio.h>
int main(){
    int k,a,b;
    scanf("%d%d%d",&k,&a,&b);
    int c;
    c=a/k;
    if(a%k==0){
        printf("OK");
        return 0;
    }

    if(k*(c+1)<=b){
        printf("OK");
        return 0;
    }
    else
    {
        printf("NG");
    }
    
}