#include <stdio.h>

int main(void){
        char a[4];
        int b[4];
        scanf("%s", a);
        int count;
        int i,j,n,sum;

        for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                        if(a[i] == a[j]){
                                b[i]++;
                        }

                }
        }
        for(n=0;n<4;n++){
                int sum = sum + b[i];
        }
        if(sum <= 8){
                printf("Yes\n");
        }else{
                printf("No\n");
        }
}