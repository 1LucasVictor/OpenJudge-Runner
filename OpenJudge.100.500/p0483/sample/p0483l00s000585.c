#include<stdio.h>

int main(void){
    int N;
    scanf("%d",&N);

    if(N%10==7) puts("Yes");
    else{
        N%=10;
        if(N%10==7)   puts("Yes");
        else{
            if(N%10==7) puts("Yes");    
            else puts("No");
        }
    }
    return 0;
}