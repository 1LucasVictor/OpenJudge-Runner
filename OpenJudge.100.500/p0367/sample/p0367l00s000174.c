#include <stdio.h>
int main(void){
    int a,b,c,N;
    N=0;
    scanf("%d %d %d",&a,&b,&c);
    
    for(int x = a;x <= b;x++){
        if(c%x == 0){
            N++;
        }
    }
    printf("%d\n",N);
    return 0;
}
