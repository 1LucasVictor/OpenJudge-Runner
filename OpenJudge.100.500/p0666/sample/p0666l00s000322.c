#include <stdio.h>
int main(void){
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(a>b) printf("delicious");
    else if(x>abs(a-b)) printf("safe");
    else if(x<a-b) printf("dangerous");
    return 0;
}