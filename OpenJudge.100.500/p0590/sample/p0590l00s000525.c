#define N 5
#include <stdio.h>

int main(){
    
    int x[N];
    int y[N];
    int k;
    int i;
    
    for(i = 0; i < N; i++ ){
        scanf("%d",&x[i]);
    }
    scanf("%d",&k);

    if(x[4] - x[0] < k)printf("Yay!\n");
    else printf(":(\n");
    
    return 0;
}