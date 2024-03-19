#include <stdio.h>
int main(int argc, const char *argv[]){
    int a,b,c,x=0;
    
    scanf("%d",&x);
    a = x / 3600;
    b = (x%3600)/60;
    c = x%60;
    
    printf("%d:%d:%d\n",a,b,c);
    return 0;
}