#include<stdio.h>

int main(void){
    double N;
    scanf("%lf",&N);
    double A[(int)N], B[(int)N];
    for(int i = 0; i < N; i++){
        A[i] = 0.0;
    }

    for(int i = 1; i < N; i++){
        scanf("%lf",&B[i]);
    }
    for(int i = 0; i < N; i++){
        A[(int)B[i]-1]++;
    }
    for(int i = 0; i < N; i++){
        printf("%.0f\n",A[i]);
    }
    return 0;
}