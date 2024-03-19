#include <stdio.h>

int main (void){
        
        int N;
        int digi100,digi10,digi1; //桁
        
        scanf("%d",&N);

        digi100 = N / 100; //100の位
        digi10 = ((N - 100 * digi100) / 10); //10の位
        digi1 = N - (100 * digi100 + 10 * digi10); //1の位

        if(digi100 == 7 || digi10 == 7 || digi1 == 7){
                printf("Yes\n");
        }
        else{
                printf("No\n");
        }

        return 0;
}
