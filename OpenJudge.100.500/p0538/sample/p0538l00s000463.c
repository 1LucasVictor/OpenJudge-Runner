#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    scanf("%d %d\n",&a,&b);
    if(a>=10 || b>=10)  printf("-1\n");
    else                printf("%d\n",a*b);
    return 0;
    
}
