#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    int i;
    for (i = 3; i <= N;i++){
        int x = i;
        if (x % 3 == 0)
        {
            printf(" %d", i);
        }
        else{
            while (x){
                if (x % 10 == 3){
                    printf(" %d", i);
                    break;
                }
                x = x / 10;
            }
        }
    }
    printf("\n");
    return 0;
}
