#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A-B>=C){
        printf("0\n");
    }
    else{
        C=C-(A-B);
        printf("%d\n",C);
    }
    return 0;
}