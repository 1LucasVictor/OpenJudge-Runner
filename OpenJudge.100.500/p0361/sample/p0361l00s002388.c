#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,a,b,c;
    scanf("%d",&i);
    a = i/3600;
    b = (i-(a*3600))/60;
    c = i%60;
    printf("%d:%d:%d\n",a,b,c);
    
    return 0;
}