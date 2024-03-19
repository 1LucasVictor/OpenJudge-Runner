#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    int h, m ,s;
    
    h = t/3600;
    m = (t%3600)/60;
    s = t%60;
    
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}
