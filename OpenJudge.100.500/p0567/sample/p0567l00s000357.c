#include<stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(C-(A-B)>=0){
        printf("%d\n",C-(A-B));
    }else{
        printf("0\n");
    }
    return 0;
}