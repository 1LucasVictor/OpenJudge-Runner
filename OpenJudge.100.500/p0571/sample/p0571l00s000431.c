#include<stdio.h>
int main(void){
        int N,A,B;
        scanf("%d",&N);

        scanf("%d",&A);
        scanf("%d",&B);
        if(N*A>B){
                printf("%d",B);
        }
        else{
                printf("%d",N*A);
        }
        return 0;
}
