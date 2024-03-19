/* 167b.c */
#include <stdio.h>

int main(void){
    int a,b,c=0;
    int k=0;
    int count=0;
    int k2=0;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    for(int i=0;i<a;i++){
        count=count+1;
        k2++;
        if(k2==k){
            printf("%d",count);
            return 0;
        }
    }
    for(int i=0;i<b;i++){
        count=count+0;
        k2++;
        if(k2==k){
            printf("%d",count);
            return 0;
        }
    }
    for(int i=0;i<c;i++){
        count=count-1;
        k2++;
        if(k2==k){
            printf("%d",count);
            return 0;
        }
    }
}