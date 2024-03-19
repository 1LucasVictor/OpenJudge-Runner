#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int count = 0;
        for(int a=0; a<10; a++){
            for(int b=0; b<10; b++){
                for(int c=0; c<10; c++){
                    for(int d=0; d<10; d++){
                        int sum = n - (a + b + c + d);
                        if(sum == 0){
                            count++;
                        }
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

