#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);

    int fl = 0;
    for(int i=1; i<10; i++){
        if(N%i == 0 && N/i < 10){
            fl = 1;
            break;
        }
    }

    if(fl){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;

}