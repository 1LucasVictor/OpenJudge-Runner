#include <stdio.h>
int main(void){
    int x, h;
    scanf("%d", &x);
    h = (x/500)*1000+((x%500)/5)*5;
    printf("%d\n",h);
    return 0;
}