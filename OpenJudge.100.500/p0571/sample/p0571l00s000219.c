#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c;
    
    scanf("%d %d %d\n",&a,&b,&c);
    
    if(a*b <= c) printf("%d\n",a*b);
    else         printf("%d\n",c);
    return 0;
}
