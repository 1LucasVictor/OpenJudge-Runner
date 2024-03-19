#include <stdio.h>
int main(void){
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(a>=b) printf("delicious");
    else if(x>=b-a) printf("safe");
    else  printf("dangerous");
    return 0;
}