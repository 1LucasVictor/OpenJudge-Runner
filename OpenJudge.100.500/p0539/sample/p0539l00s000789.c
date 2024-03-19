#include <stdio.h>

int main(void){
    int num;

    scanf("%d",&num);

    for(int i=1; i<=9; i++){
        if(num/i < 10 && num%i == 0){
            printf("Yes\n");
            return 0;
        }
    }
    
    printf("No\n");
    return 0;
}
