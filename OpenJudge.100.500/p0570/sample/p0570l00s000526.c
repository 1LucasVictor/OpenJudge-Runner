#include <stdio.h>
int main(void){
    int a,b;
 scanf("%d %d",&a,&b);
   int s = a+b;
    if(s%2==0)printf("%d",s/2);
    else printf("IMPOSSIBLE");
    return 0;
}