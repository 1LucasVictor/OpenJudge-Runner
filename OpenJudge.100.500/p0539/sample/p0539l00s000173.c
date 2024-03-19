#include<stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    int a, b;
    for(int i=1; i<10; i++){
        a=N/i;
        b=N%i;
        if(b==0&&a<10){
            printf("Yes");
            break;
        }else if(i==9&&b!=0){
            printf("No");
        }
    }
    return 0;
}