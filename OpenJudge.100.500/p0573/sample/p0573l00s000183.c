#include <stdio.h>

int main(void){
        char a[4];
        scanf("%s", a);
        int count;
        int sum =0;

        for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                        if(a[i] == a[j]){
                                sum++;
                        }

                }
        }
        if(sum == 8){
                printf("Yes\n");
        }else{
                printf("No\n");
        }
        return 0;
}