#include<stdio.h>

int main(void){
    int A,H,i=0;

    scanf("%d %d",&H,&A);
    while(H>0){
        H -= A;
        i++;
    }
    printf("%d\n",i);
    return 0;
}