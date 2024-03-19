#include<stdio.h>

int main(){
    int n,i,t;
    scanf("%d",&n);
    for(i=100000;n>0;n--){
        i*=1.05;
        t=i%1000;
        if(t>0){
            i=i+1000-t;
        }
    }
    printf("%d\n",i);
}