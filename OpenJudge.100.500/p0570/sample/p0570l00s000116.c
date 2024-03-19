#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    scanf("%d %d\n",&a,&b);
    if(a+b%2)   printf("%d\n",(a+b)/2);
    else        printf("IMPOSSIBLE\n");
    
    return 0;
}
