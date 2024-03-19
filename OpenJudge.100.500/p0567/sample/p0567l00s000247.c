#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a=a-b;
    c=c-a;
    if(c<0)c=0;
    printf("%d\n",c);
    return 0;
    
}
