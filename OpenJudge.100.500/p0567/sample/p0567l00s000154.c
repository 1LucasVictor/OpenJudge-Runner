#include<stdio.h>
    int main(){
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
            //if(B >= A){B = A;}
        int D = C - (A - B);
        if(D>0){printf("%d", D);}
      else{printf("0");}
        return 0;

    }