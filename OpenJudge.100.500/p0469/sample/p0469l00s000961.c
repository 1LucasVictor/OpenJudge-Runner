#include<stdio.h>

int main(void){
    int K,A,B;
    scanf("%d",&K);
    scanf("%d %d",&A,&B);
    int i;
    int flg=0;
    for(i=A; i<=B; i++){
        if(i%K==0)
          flg=1;
    }
    if(flg==1)
        printf("OK");
    else
        printf("NG");
    
    return 0;
}