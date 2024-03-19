#include<stdio.h>

int prime(int x){
    int i;

    if(x==1) return 0;
    if(x==2) return 1;
    if(x!=2&&x%2==0) return 0;

    for(i=3;i*i<=x;i+=2){
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int i,n,r,count=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&r);
        if(prime(r))count++;
    }
    printf("%d\n",count);
    return 0;
}