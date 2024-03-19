#include <stdio.h>
int main(void){
    // Your code here!
    int A,B,X;
    scanf("%d %d %d",&A,&B,&X);
    if(A+B>=X && X>=A){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
