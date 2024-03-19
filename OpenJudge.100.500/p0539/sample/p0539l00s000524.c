/* ex3_4 melo */
#include <stdio.h>
int main(void){
    int N, n, i, j;
    int a=0;
    scanf("%d",&N);
        for(i=1;i<10;i++){
            for(j=1;j<10;j++){
                n=i*j;
                if(N==n){
                    a=1;
                }
            }
        }
        if(a==1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }

        return 0;
    }