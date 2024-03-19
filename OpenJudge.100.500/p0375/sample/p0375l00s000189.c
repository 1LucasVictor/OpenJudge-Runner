#include<stdio.h>


int main(){
    int a, i;
    scanf("%d", &a);

    for(i = 1; i <= a; i++){
        int x = i;
        if(i % 3 == 0){
            printf(" ");
            printf("%d", i);
        }
        else{
            while(x != 0){
                if(x % 10 == 3){
                    printf(" ");
                    printf("%d", i);
                    break;
                }
                x /= 10;
            }
        }
        
    }
    printf("\n");
    return 0;
}
