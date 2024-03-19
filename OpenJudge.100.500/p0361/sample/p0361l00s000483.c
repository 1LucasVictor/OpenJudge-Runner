#include <stdio.h>
int main(void){
    // Your code here!
    int n,h,m,s;
    scanf("%d",&n);
    s=n%60;
    m=n/60%60;
    h=n/3600;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}

