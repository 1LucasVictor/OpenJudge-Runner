#include <stdio.h>
#include<stdbool.h>

int main(void){
    int x;
    int h,m,s,a,b;
    scanf("%d",&x);
    h=x/3600;
    a=x-(h*3600);
    m=a/60;
    b=x-(h*3600+m*60);
    s=b/1;
    printf("%d:%d:%d\n",h,m,s);
    
    return 0;
}
