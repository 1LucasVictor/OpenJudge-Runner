#include<stdio.h>
int main(void){
    int N;  
    scanf("%d",&N);
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i*j==N){
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
}