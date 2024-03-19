#include<stdio.h>
int main(){
    int x;
    int n;
    int i;
    scanf("%d", &n);
    for(i = 1;i <= n;i++){
        if(i % 3 == 0){
            printf(" %d", i);
            continue;
        }
        x = i;
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
