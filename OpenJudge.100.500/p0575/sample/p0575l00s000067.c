#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap_int(int *x, int *y) {int temp;temp = *x;*x = *y;*y = temp;}
void swap_char(char *x, char *y) {char temp;temp = *x;*x = *y;*y = temp;}
int max(int x, int y) { return x > y ? x : y; }
int min(int x, int y) { return x > y ? y : x; }

int main(){
    int x,a;

    scanf("%d %d",&x,&x);
    if(x<a){
        printf("0\n");
    }else{
        printf("10\n");
    }
    return 0;
}