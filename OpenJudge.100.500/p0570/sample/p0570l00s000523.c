#include <stdio.h>


int main(){

    int n;
    int u;
    
    scanf("%d%d", &n,&u);
    float m=((float)n+(float)u)/2;
   
    if(m-(int)m== 0) {
        printf("%d",(int)m);
    }
    else {
        printf("IMPOSSIBLE");
    }
    
    return 0;
}
