#include <stdio.h>

int main (void){
    int A, B, C;
    scanf("%d %d %d", &A,&B,&C);
    if(A==7){
        if(B==5&&C==5){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    else if(A==5){
        if(B==7 && C==5){
            printf("YES\n");
        }
        else if(C==7&& B==5){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
}