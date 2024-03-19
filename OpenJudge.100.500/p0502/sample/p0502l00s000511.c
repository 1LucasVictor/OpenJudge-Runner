#include<stdio.h>

int main(){
    int n;
    int a[100];
    int even = 0;
    int nyukoku = 0;

    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0){
            ++even;
            if((a[i] % 3 == 0)||(a[i] % 5 == 0)){
                ++nyukoku;
            }
        }
    }

    if(even == nyukoku){
        printf("APPROVED");
    }else{
        printf("DENIED");
    }

}