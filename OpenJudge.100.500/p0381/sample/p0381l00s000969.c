#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, x;
    int i, j, k;
    int a=0;
    
    while(1) {
        scanf("%d %d",&n,&x);
        if (n == 0 && x == 0) {
            break;
        }
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                for(k=1; k<=n; k++){
                    if((i+j+k)== x && i != j && j != k && k != i){// ==：等しければ !=：等しくなければ
                        a +=1;
                    }
                }
            }
        }
    }
        printf("%d\n",a/6);

    return 0;
}

