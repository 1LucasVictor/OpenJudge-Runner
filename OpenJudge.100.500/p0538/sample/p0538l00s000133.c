#include <stdio.h>
int main(void){
    int A,B=0;
    scanf("%d %d",&A,&B);

    if(1<=A<=9&&1<=B<=9){
        printf("%d",A*B);
    }else{
        printf("-1");
    }
}