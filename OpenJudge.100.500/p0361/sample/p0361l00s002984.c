#include <stdio.h>

int main(void) {
    
    int input_s,h,m,s;
    scanf("%d",&input_s);
    h=input_s/3600;
    m=(input_s-3600*h)/60;
    s=input_s-3600*h-60*m;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}