#include<stdio.h>

int main(){
    int A,B,i=1,temp,flg=1;

    scanf("%d",&A);
    scanf("%d",&B);
    temp=A-1;
    if(B==1){
        i=0;
        flg=0;
    }
    while(A<B && flg==1){
        A+=temp;
        i++;
    }
    printf("%d\n",i);

    return 0;
}