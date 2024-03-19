#include <stdio.h>

int A;
int B;
int X;
int AN;
int RN;

int main(void){
scanf("%d%d%d",&A,&B,&X);

AN = A + B;
RN = AN - X;
if(A<= X){
    if(RN >= 0){
    printf("YES\n");
    }else {
    printf("NO\n");
    }
}else{
    printf("NO\n");
}
}