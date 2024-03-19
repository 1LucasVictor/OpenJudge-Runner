#include <stdio.h>
#include <math.h>

int main(){
    
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%3==0){
            printf(" %d", i);
        }
        else{
            int it = i;
            while(1){
                if(it <= 0){
                    break;
                }
                else{
                    if(it%10 == 3){
                        printf(" %d", i);
                        break;
                    }
                    it = it / 10;
                }
            }
        }
    }

    printf("\n");

    return 0;
}
