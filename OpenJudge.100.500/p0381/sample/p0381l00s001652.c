#include <stdio.h>

int main(void) {
    int n, i, j,k,x;
    int count=0;
    
    //printf("n? ");
    scanf("%d", &n);
    scanf("%d",&x);
    if(n<3 || x==0 || n>100){exit(1);}
    
    for (i = 1; i < n; i++) {
        for (j = i + 1; j < n+1; j++) {
            for(k=j+1; k< n+1; k++){
            if (i != k) {
                //printf("%d, %d, %d\n", i, j,k);
                if(i+j+k==x){count++;}
                }
            }
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}