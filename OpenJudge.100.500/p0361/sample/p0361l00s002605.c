#include <stdio.h>
int main (int argc, const char * argv[]) {

    int s,m,h;
    
    scanf("%d",&s);
    if(s<0 || s>86400){
        return -1;
    }
    
    m = s / 60;
    s = s % 60;
    h = m / 60;
    m = m % 60;
    
    printf("%d:%d:%d\n",h,m,s);
    
        return 0;
}