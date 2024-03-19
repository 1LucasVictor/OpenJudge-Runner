#include<stdio.h>
int main() {
    int h,a;
    int i=0;
    scanf("%d %d", &h, &a);
    while(h>0){
    i++;
    h=h-a;
    }
    printf("%d\n", i);
    return 0;
}
