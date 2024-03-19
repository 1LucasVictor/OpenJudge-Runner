#include <stdio.h>

int main(void)
{
    int num[4];
    int temp;
    int i, j;
    
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
    
    if(num[1] < num[2] || num[3]<num[0]){
        printf("%d\n", 0);
    }else{
        for(i=0; i<4; i++){
            for(j=i+1; j<4; j++){
                if(num[i] > num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        printf("%d\n", num[2] - num[1]);
    }
    
    return 0;
}
