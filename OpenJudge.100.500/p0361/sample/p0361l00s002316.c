#include <stdio.h>
int main(void){
    // Here your code !
    int H,M,S,MA;
    scanf("%d",&MA);
    H = MA/3600;
    M = (MA-(3600*H))/60;
    S = MA-(H*3600+M*60);
    printf("%d:%d:%d\n",H,M,S);
    return 0;
}