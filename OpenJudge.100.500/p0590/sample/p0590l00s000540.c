#include<stdio.h>

int main(void){
    int a[5];
    int k;
    for(register int i = 0;i < 5;i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    int c = 0;
    puts(a[4] - a[0] > k ? ":(":"Yay!");
}