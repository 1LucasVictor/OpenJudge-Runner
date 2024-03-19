#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a,b) ((a)>(0)?(a):-(a))

int main(void){
    int A,B,X;
    scanf("%d %d %d",&A,&B,&X);
    if(A<=X && X<=A+B){
        printf("YES");
    }else{printf("NO");
    }
            
    return 0;
}