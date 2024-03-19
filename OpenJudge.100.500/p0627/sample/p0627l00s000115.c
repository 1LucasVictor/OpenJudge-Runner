#include<stdio.h>
int max(int a, int b, int c);
int main(void){
    int A,B;
    scanf("%d %d", &A, &B);
    printf("%d\n",max((A+B),(A-B),(A*B)));
    return 0;
}

int max(int a, int b, int c){
    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    return max;
}