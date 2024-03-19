#include <stdio.h>
int main(void){
    // Your code here!
    int N;
    scanf("%d",&N);
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(i*j==N){
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
