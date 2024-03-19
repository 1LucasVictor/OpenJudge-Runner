#include <stdio.h>


int main(){

    int n;
    int u;
    
    scanf("%d%d", &n,&u);
    double m=((double)n+(double)u)/2;
   
    if(m-(int)m== 0) {
        printf("%d",(int)m);
    }
    else {
        printf("IMPOSSIBLE");
    }
    
    return 0;
}