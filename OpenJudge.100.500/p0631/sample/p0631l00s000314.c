#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int A, B, X;
    int result;

    //printf("Input A B X : \n");
    scanf("%d %d %d",&A,&B,&X);

    //printf("A;%d, B:%d, X:%d\n",A,B,X);

    if(A > X){
        result = 0;
    }else{
        if( (A+B) <= X){
            result =  0;
        }else{
            result = 1;
        }
    }

    if(result == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
