#include<stdio.h>

int main(){
    int A,B,i=1;

    scanf("%d",&A);
    scanf("%d",&B);

    while(A<B){
        A+=A-1;
        i++;
    }
    printf("%d\n",i);

    return 0;
}