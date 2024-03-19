#include<stdio.h>

int main(void){

    int N,i;

    scanf("%d",&N);

    for(i = 1;i <= 9;i++){
        if((N/i)/10 == 0 && (N/i)*i == N){
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
    return 0;
}
