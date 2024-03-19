#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int f = 0;
    for(int i=1; i<=9; i++){
        if(a%i == 0 && a/i <= 9){
            f = 1;
            break;
        }
    }
    if(f){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}