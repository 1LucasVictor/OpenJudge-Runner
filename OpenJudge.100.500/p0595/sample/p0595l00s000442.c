#include<stdio.h>
int main(){
    int A,B,K;
    int st,num;
    int count=0;
    scanf("%d%d%d",&A,&B,&K);
    if(A<B){
        st=B/2;
        num=A;

    }else{
        st=A/2;
        num=B;
    }
    if(st==0){
        st=1;
    }
    for(int i=st;i>0;i--){
        if(num%i==0){
            
            count++;
            if(count==K){
                printf("%d\n",i);
            }
        }
    }
}