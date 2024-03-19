#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c;
    int tmp;
    scanf("%d %d %d",&a,&b,&c);
    
    tmp = a-b;
    tmp = c - tmp;
    
    if(tmp<0) tmp = 0;
    
    printf("%d\n",tmp);
    
    return 0;
}
