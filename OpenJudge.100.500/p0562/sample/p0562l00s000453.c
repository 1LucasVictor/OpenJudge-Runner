#include<stdio.h>

int main(){
    int A,B,i=1,temp;

    scanf("%d",&A);
    scanf("%d",&B);
    temp=A-1;

    while(A<B){
        A+=temp;
        i++;
    }
    printf("%d\n",i);

    return 0;
}