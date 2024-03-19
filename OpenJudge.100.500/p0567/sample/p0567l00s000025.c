#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(C+B-A<0){
        printf("0");
        return 0;
    }
    printf("%d",C+B-A);
}