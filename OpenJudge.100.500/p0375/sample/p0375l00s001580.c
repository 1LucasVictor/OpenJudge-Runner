#include<stdio.h>
int main(){
    int n;
    int x;
    int i;
    scanf("%d", &n);
    for(i = 1;i <= n;i++){
        x = i;
        if(i % 3 == 0){
            printf(" %d", i);
            continue;
        }
        do{
            if(x % 10 == 3){
                printf(" %d", i);
                break;
            }
            x /= 10;
        }while(x);
    }
    printf("\n");
    return 0;
}
