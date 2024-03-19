#include <stdio.h>
#include <math.h>

int main(){
    int n, x;

    while(1){
        scanf("%d %d", &n, &x);
        if((n==0)&&(x==0)){
            break;
        }
        else{
            int num = 0;
            for(int i=1; i<=n; i++){
                for(int j=i+1; j<=n; j++){
                    for(int k=j+1; k<=n; k++){
                        if(i+j+k == x){
                            num = num + 1;
                        }
                    }
                }
            }
            printf("%d\n", num);
        }
    }


    return 0;
}
