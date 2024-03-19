#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,t;
    int ans = 0;
    
    scanf("%d %d %d",&a,&b,&t);
    
    ans = (t / a) * b;
    
    printf("%d\n",ans);
    
    return 0;
}
