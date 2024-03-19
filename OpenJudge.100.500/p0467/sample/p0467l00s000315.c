#include <stdio.h>
int main(void){
    // Your code here!
    int a, b, c, k;
    
    scanf("%d%d%d%d",&a,&b,&c,&k);
    
    
    if(k<=a) printf("%d\n",k);
    
    else{
        if(k<=a+b)  printf("%d\n",a);
        else printf("%d\n",a+(k-(a+b))*(-1));
    }
    
    return 0;
}