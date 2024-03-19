#include <stdio.h>
int main(void){
    // Your code here!
    int x;
    scanf("%d",&x);
    int h=0;
    h+=(int)(x/500)*1000;
    x%=500;
    h+=(int)(x/5)*5;
    printf("%d",h);
}
