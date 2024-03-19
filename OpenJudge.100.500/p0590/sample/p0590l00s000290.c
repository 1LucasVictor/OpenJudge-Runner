#include <stdio.h>
#include <stdlib.h>
    
int main(void){
    int ant[5],k;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&ant[0],&ant[1],&ant[2],&ant[3],&ant[4],&k);

    for (int i = 0;i < 5;i++){
        for(int j = i+1;j < 5;j++){
            if(abs(ant[i] - ant [j]) > k){
                printf(":(");
                return 0;
            }
        }
    }

    printf("Yay!");
    return 0;
}