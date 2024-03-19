#include<stdio.h>

int main(void){
    int N, a, b, c;//a:100の位　b:10の位　c:1の位
    
    scanf("%d",&N);
    a = N / 100;
    b = (N /10) - (a * 10);
    c = N % 10;

    if(a== 7 || b == 7 || c == 7){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}