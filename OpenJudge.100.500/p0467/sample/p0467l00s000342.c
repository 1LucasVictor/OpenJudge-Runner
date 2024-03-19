#include<stdio.h>
int main(void){
    int A[4];
   
    int a,b,c,d;
    b=0;
    c=0;
    d=0;
    for(a=0;a<4;a++){
        scanf("%d",&A[a]);

    }
    for(a=0;a<A[3];a++){
        if(b<A[0]){
            c=c+1;
            b=b+1;
        }else{
            if(d<A[1]){
                d=d+1;
            }else{
                c=c-1;
            }
        }

    }
   printf("%d",c);
    
    
    }

