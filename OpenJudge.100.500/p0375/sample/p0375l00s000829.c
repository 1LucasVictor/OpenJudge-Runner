#include<stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            printf(" %d", i);
            continue;
        }
        int temp = i;
        while(temp){
            if(temp % 10 == 3){
                printf(" %d", i);
                break;
            } else {
                temp /= 10;
            }
        }
    }
	printf("\n");
	
    return 0;
}
